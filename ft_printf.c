/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 14:05:44 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/01 14:05:48 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	show_tmp(t_pattern tmp)
{
	printf("hash: %d\n", tmp.hash);
	printf("minus: %d\n", tmp.minus);
	printf("plus: %d\n", tmp.plus);
	printf("zero: %d\n", tmp.zero);
	printf("space: %d\n", tmp.space);
	printf("width: %d\n", tmp.width);
	printf("precision: %d\n", tmp.precision);
	printf("cast: %s\n", tmp.cast);
	printf("type: %c\n", tmp.type);
}

t_pattern new_value(void)
{
	t_pattern tmp;

	tmp.hash = 0;
	tmp.minus = 0;
	tmp.plus = 0;
	tmp.space = 0;
	tmp.zero = 0;
	tmp.width = 0;
	tmp.precision = 0;
	tmp.cast = 0;
	tmp.type = 0;
	return (tmp);
}

// int	test(int a)
// {
// 	ft_putnbr(a);
// }

// void	type(int a, *f(int)) // problem !!!
// {
// 	// f(a);
// }

int is_type(char c)
{
	if (c == 's' || c == 'S' || c == 'p' || c == 'd' ||
		c == 'D' || c == 'i' || c == 'o' || c == 'O' ||
		c == 'u' || c == 'U' || c == 'x' || c == 'X' ||
		c == 'c' || c == 'C' || c == '%')
		return (1);
	else
		return (0);
}

int	is_cast(char c)
{
	if (c == 'h' || c == 'l' || c == 'j' || c == 'z')
		return (1);
	else
		return (0);
}

int is_flag(char c)
{
	if (c == '#' || c == '-' || c == '+' || c == '0' || c == ' ')
		return (1);
	else
		return (0);
}

void	put_to_value(t_pattern *tmp, char flag)
{
	if (flag == '#')
		tmp->hash = 1;
	else if (flag == '-')
		tmp->minus = 1;
	else if (flag == '+')
		tmp->plus = 1;
	else if (flag == '0')
		tmp->zero = 1;
	else if (flag == ' ')
		tmp->space = 1;
}

int	print(va_list argptr, t_pattern tmp)
{
	if (tmp.type == 's' || tmp.type == 'S')
		return(type_s(argptr, tmp));
	else if (tmp.type == 'c' || tmp.type == 'C')
		return(type_c(argptr, tmp));
	else if (tmp.type == 'd' || tmp.type == 'i' || tmp.type == 'D')
		return(type_integer(argptr, tmp));
	else if (tmp.type == 'u' || tmp.type == 'U')
		return(type_unsigned(argptr, tmp));
	else if (tmp.type == 'o' || tmp.type == 'O')
		return(type_o(argptr, tmp));
	else if (tmp.type == 'x' || tmp.type == 'X' || tmp.type == 'p')
		return(type_hex(argptr, tmp));
	else if (tmp.type == '%')
		return(type_persent(argptr, tmp));
	else
		return (100500);
}

int max(int nbr1, int nbr2)
{
	if (nbr1 >= nbr2)
		return (nbr1);
	else
		return (nbr2);
}

int	ft_printf(const char *format, ...)
{
	va_list		argptr;
	int			i;
	t_pattern	tmp;
	int 		start;
	int sum;
	int buf;

	va_start(argptr, format); /* the last defined variable as parameter */
	i = -1;
	sum = 0;
	while (format[++i])
	{
		if (format[i] == '%') /* qualifier */
		{
			tmp = new_value();
			i++;

			while (is_flag(format[i]))
			{
				put_to_value(&tmp, format[i++]);
			}
			while (ft_isdigit(format[i]))
			{
				start = i;
				while (ft_isdigit(format[i]))
					i++;
				tmp.width = ft_atoi(ft_strsub(format, start, i - start));
			}
			if (format[i] == '.')
			{
				i++;
				start = i;
				while (ft_isdigit(format[i]))
					i++;
				buf = ft_atoi(ft_strsub(format, start, i - start));
				if (buf != 0) /* ("%.d",0) = " " */
					tmp.precision = buf;
				else
					tmp.precision = -1;
				
			}
			while (is_cast(format[i]))
			{
				start = i;
				while (is_cast(format[i]))
					i++;
				tmp.cast = ft_strsub(format, start, i - start);
			}
			// printf("hello\n");
			if (is_type(format[i]))
			{
				tmp.type = format[i];
				sum += print(argptr, tmp);
			}
			else
			{
				// i--;
				// sum += tmp.width;
				while (tmp.minus == 0 && --tmp.width > 0)
				{
					sum += 1;
					ft_putchar(' ');
					
				}
				if (format[i] != '\0')
				{
					write(1, format[i], 1);
					sum += 1;
					// i++;
				}
				while (tmp.minus == 1 && --tmp.width > 0)
				{
					sum += 1;
					ft_putchar(' ');
				}
				
				
			}
		}

		else
		{
			ft_putchar(format[i]);
			sum += 1;
		}
	}
	return (sum);
}

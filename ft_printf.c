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
	tmp.type = 0;
	return (tmp);
}

int	type_c(va_list argptr, t_pattern tmp)
{
	int	c;

	c = va_arg(argptr, int);
	ft_putchar(c);
	return (100500);
}

int	type_persent(va_list argptr, t_pattern tmp)
{
	ft_putchar('%');
	return (1);
}

int	type_unsigned(va_list argptr, t_pattern tmp)
{
	unsigned int nbr;

	nbr = va_arg(argptr, unsigned int);
	ft_putstr(itoa_base(nbr, 8, 0));
	return (100500);
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
		c == 'c' || c == 'C')
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
	if (tmp.type == 's')
		return(type_s(argptr, tmp));
	else if (tmp.type == 'c')
		return(type_c(argptr, tmp));
	else if (tmp.type == 'd' || tmp.type == 'i')
		return(type_integer(argptr, tmp));
	else if (tmp.type == 'o')
		return(type_o(argptr, tmp));
	else if (tmp.type == 'D' || tmp.type == 'O' || tmp.type == 'U')
		return(type_unsigned(argptr, tmp));
	else if (tmp.type == 'x' || tmp.type == 'X')
		return(type_hex(argptr, tmp));
	else if (tmp.type == '%')
		return(type_persent(argptr, tmp));
}

// int		ignored_error(char flag1, char flag2)
// {
// 	ft_printf("%s	warning:%s flag '%c' is ignored when flag '%c' is present\n", RED, OFF, flag1, flag2);
// 	return (0);
// }

// int		und_behavior_error(char flag, char type)
// {
// 	ft_printf("%s	warning:%s flag '%c' results in undefined behavior with '%c' conversion specifier\n",
// 		RED, OFF, flag, type);
// 	return (0);
// }

// int		invalid_specifier(char type)
// {
// 	ft_printf("%s	warning:%s invalid conversion specifier '%c'\n", RED, OFF, type);
// 	return (0);
// }

// int		check_flags(t_pattern tmp)
// {
// 	if (!is_type(tmp.type))
// 		return (invalid_specifier(tmp.type));

// 	if (tmp.space == 1 && tmp.plus == 1)
// 		return (ignored_error(' ', '+'));
// 	if (tmp.zero == 1 && tmp.minus == 1)
// 		return (ignored_error('0', '-'));

// 	if (tmp.type == 'o' && tmp.plus == 1)
// 		return(und_behavior_error('+', 'o'));
// 	if (tmp.type == 'o' && tmp.space == 1)
// 		return(und_behavior_error(' ', 'o'));
// 	if (tmp.type == 'x' && tmp.plus == 1)
// 		return(und_behavior_error('+', 'x'));
// 	if (tmp.type == 'x' && tmp.space == 1)
// 		return(und_behavior_error(' ', 'x'));
// 	if (tmp.type == 'X' && tmp.plus == 1)
// 		return(und_behavior_error('+', 'X'));
// 	if (tmp.type == 'X' && tmp.space == 1)
// 		return(und_behavior_error(' ', 'X'));
// 	if (tmp.type == 'i' && tmp.hash == 1)
// 		return(und_behavior_error('#', 'i'));
// 	if (tmp.type == 'd' && tmp.hash == 1)
// 		return(und_behavior_error('#', 'i'));
// 	return (1);
// }

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
				put_to_value(&tmp, format[i++]);
			start = i;
			while (ft_isdigit(format[i]))
				i++;
			tmp.width = ft_atoi(ft_strsub(format, start, i - start));
			if (format[i] == '.')
			{
				start = i + 1;
				while (ft_isdigit(format[++i]))
					;
				tmp.precision = ft_atoi(ft_strsub(format, start, i - start));
			}
			tmp.type = format[i];
			// if (check_flags(tmp) == 0)
			// 	return (0);
			sum += print(argptr, tmp);
			// show_tmp(tmp);
		}
		else
		{
			ft_putchar(format[i]);
			sum += 1;
		}
	}
	return (sum);
}

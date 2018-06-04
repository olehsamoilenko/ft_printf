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

t_spaces	new_spaces(void)
{
	t_spaces tmp;

	tmp.start = 0;
	tmp.end = 0;
	tmp.zeroes = 0;

	tmp.prefix = 0;
	return (tmp);
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
	else
		return (0);
}

int collect_width(const char *format, int *i)
{
	int		buf;
	char	*num;
	int		res;

	buf = *i;
	while (ft_isdigit(format[*i]))
		(*i)++;
	num = ft_strsub(format, buf, *i - buf);
	res = ft_atoi(num);
	ft_strdel(&num);
	return (res);
}

int	ft_printf(const char *format, ...)
{
	va_list		argptr;
	int			i;
	t_pattern	tmp;
	char		*num;
	int			sum;
	int			buf;

	va_start(argptr, format); /* the last defined variable as parameter */
	i = -1;
	sum = 0;
	while (format[++i])
	{
		if (format[i] == '%') /* qualifier */
		{
			tmp = new_value();
			i++;
			while (1)
			{
				if (is_flag(format[i]))
					put_to_value(&tmp, format[i++]);
				if (format[i] >= '1' && format[i] <= '9')
					tmp.width = collect_width(format, &i);
				if (format[i] == '.')
				{
					i++;
					buf = i;
					while (ft_isdigit(format[i]))
						i++;
					num = ft_strsub(format, buf, i - buf);
					buf = ft_atoi(num);
					ft_strdel(&num);
					if (buf != 0) /* ("%.d",0) = " " */
						tmp.precision = buf;
					else
						tmp.precision = -1;
				}
				if (is_cast(format[i]))
				{
					if (format[i] == 'z' && Z > tmp.cast)
						tmp.cast = Z;
					else if (format[i] == 'j' && J > tmp.cast)
						tmp.cast = J;
					else if (format[i] == 'l' && format[i + 1] == 'l' && LL > tmp.cast)
						tmp.cast = LL;
					else if (format[i] == 'l' && L > tmp.cast)
						tmp.cast = L;
					else if (format[i] == 'h' && format[i + 1] == 'h' && HH > tmp.cast)
						tmp.cast = HH;
					else if (format[i] == 'h' && H > tmp.cast)
						tmp.cast = H;
					i++;
					if (tmp.cast == HH || tmp.cast == LL)
						i++;
				}
				if (is_type(format[i]))
				{
					tmp.type = format[i];
					sum += print(argptr, tmp);
					break ;
				}
				if (!is_flag(format[i]) && !ft_isdigit(format[i]) &&
					!is_cast(format[i]) && !is_type(format[i]) && format[i] != '.')
					{
						if (format[i] == '\0')
							return (sum);
						sum += print_c(format[i], tmp);
						break ;
					}
				}
		}
		else
			sum += ft_putchar(format[i]);
	}
	return (sum);
}

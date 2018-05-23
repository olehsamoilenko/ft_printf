/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_integer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 11:21:07 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/04 11:21:10 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	type_integer(va_list argptr, t_pattern tmp)
{
	intmax_t	nbr;
	char		*str;
	t_spaces	spaces;
	int			res;
	char		*buf;

	if (tmp.cast == L || tmp.type == 'D')
		nbr = va_arg(argptr, long);
	else if (tmp.cast == NONE)
		nbr = va_arg(argptr, int);
	else if (tmp.cast == H)
		nbr = (short)va_arg(argptr, int);
	else if (tmp.cast == HH)
		nbr = (char)va_arg(argptr, int);
	else if (tmp.cast == LL)
		nbr = va_arg(argptr, long long);
	else if (tmp.cast == J)
		nbr = va_arg(argptr, intmax_t);
	else if (tmp.cast == Z)
		nbr = va_arg(argptr, size_t);


	spaces = new_spaces();
	if (nbr == 0 && tmp.precision == -1)
		str = ft_strdup("");
	else
		str = ft_itoa(nbr);

	if (nbr < 0)
	{
		spaces.prefix = "-";
		buf = str;
		str = ft_strsub(str, 1, ft_strlen(str) - 1);
		ft_strdel(&buf);
	}
	spaces.zeroes = tmp.precision - ft_strlen(str);
	if (spaces.zeroes < 0)
		spaces.zeroes = 0;
	spaces.start = tmp.width - spaces.zeroes - ft_strlen(str) - ft_strlen(spaces.prefix);
	if (spaces.start < 0)
		spaces.start = 0;
	if (tmp.plus == 1 && nbr >= 0)
	{
		spaces.prefix = "+";
		spaces.start -= ft_strlen(spaces.prefix);
	}
	if (tmp.space == 1 && nbr >= 0 && spaces.prefix == 0)
	{
		spaces.prefix = " ";
		spaces.start -= ft_strlen(spaces.prefix);
	}
	if (tmp.minus == 1)
	{
		spaces.end = spaces.start;
		spaces.start = 0;
	}
	if (tmp.zero == 1 && tmp.precision == 0)
	{
		spaces.zeroes += spaces.start;
		spaces.start = 0;
	}
	
	// show_tmp(tmp);
	// ft_printf("spaces.start: %d\n", spaces.start);
	// ft_printf("spaces.end: %d\n", spaces.end);
	// ft_printf("spaces.zeroes: %d\n", spaces.zeroes);
	// printf("CHECK: %s\n", str);
	res = 0;
	while (spaces.start-- > 0)
		res += ft_putchar(' ');
	res += ft_putstr(spaces.prefix);
	while (spaces.zeroes-- > 0)
		res += ft_putchar('0');
	res += ft_putstr(str);
	while (spaces.end-- > 0)
		res += ft_putchar(' ');
	return(res);
}

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
	intmax_t nbr;
	char *str;
	t_spaces spaces;

	if (ft_strequ(tmp.cast, 0) == 1)
		nbr = va_arg(argptr, int);
	else if (ft_strequ(tmp.cast, "h") == 1)
		nbr = (short)va_arg(argptr, int);
	else if (ft_strequ(tmp.cast, "hh") == 1)
		nbr = (char)va_arg(argptr, int);
	else if (ft_strequ(tmp.cast, "l") == 1)
		nbr = va_arg(argptr, long);
	else if (ft_strequ(tmp.cast, "ll") == 1)
		nbr = va_arg(argptr, long long);
	else if (ft_strequ(tmp.cast, "j") == 1)
		nbr = va_arg(argptr, intmax_t);
	else if (ft_strequ(tmp.cast, "z") == 1)
		nbr = va_arg(argptr, size_t);


	spaces = new_spaces();
	str = ft_itoa(nbr);
	// printf("CHECK: %s\n", str);
	if (nbr == 0 && tmp.precision == -1)
		str = ft_strdup("");
	// if (tmp.precision == -1)
	// 	tmp.precision = 0;
	if (nbr < 0)
	{
		// spaces.minus = 1;
		spaces.prefix = "-";
		str = ft_strsub(str, 1, ft_strlen(str) - 1);
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
	while (spaces.zeroes-- > 0)
		str = ft_strjoin("0", str);
	
	str = ft_strjoin(spaces.prefix, str);
	while (spaces.start-- > 0)
		str = ft_strjoin(" ", str);
	while (spaces.end-- > 0)
		str = ft_strjoin(str, " ");
	// printf("CHECK: %s\n", str);
	ft_putstr(str);
	return(ft_strlen(str));
}

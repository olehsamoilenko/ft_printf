/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 18:39:32 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/03 18:39:33 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	type_hex(va_list argptr, t_pattern tmp)
{
	intmax_t nbr;
	char *str;
	t_spaces spaces;

	if (ft_strequ(tmp.cast, 0) == 1)
		nbr = (unsigned int)va_arg(argptr, unsigned long);
	else if (ft_strequ(tmp.cast, "h") == 1)
		nbr = (unsigned short)va_arg(argptr, size_t);
	else if (ft_strequ(tmp.cast, "hh") == 1)
		nbr = (unsigned char)va_arg(argptr, size_t);
	else if (ft_strequ(tmp.cast, "l") == 1)
		nbr = va_arg(argptr, size_t);
	else if (ft_strequ(tmp.cast, "ll") == 1)
		nbr = va_arg(argptr, size_t);
	else if (ft_strequ(tmp.cast, "j") == 1)
		nbr = va_arg(argptr, size_t);
	else if (ft_strequ(tmp.cast, "z") == 1)
		nbr = va_arg(argptr, size_t);
	// else if (ft_strcmp(tmp.cast, "hh") == 1)
	// 	nbr = (char)va_arg(argptr, int);
	// else if (ft_strcmp(tmp.cast, "h") == 1)
	// 	nbr = (short)va_arg(argptr, int);
	// else if (ft_strcmp(tmp.cast, "l") == 1)
	// 	nbr = va_arg(argptr, long);
	// else if (ft_strcmp(tmp.cast, "ll") == 1)
	// 	nbr = va_arg(argptr, long long);
	// else if (ft_strcmp(tmp.cast, "j") == 1)
	// 	nbr = va_arg(argptr, intmax_t);
	// else if (ft_strcmp(tmp.cast, "z") == 1)
	// 	nbr = va_arg(argptr, size_t);

	if (tmp.type == 'x' || tmp.type == 'p')
		str = itoa_base(nbr, 16, 0);
	else if (tmp.type == 'X')
		str = itoa_base(nbr, 16, 1);
	if (nbr == 0 && tmp.precision == -1)
		str = ft_strdup("");
	spaces = new_spaces();
	spaces.zeroes = tmp.precision - ft_strlen(str);
	if (spaces.zeroes < 0)
		spaces.zeroes = 0;
	spaces.start = tmp.width - spaces.zeroes - ft_strlen(str);
	if (spaces.start < 0)
		spaces.start = 0;
	if ((tmp.hash == 1 && nbr > 0) || tmp.type == 'p')
	{
		if (tmp.type == 'x' || tmp.type == 'p')
			spaces.prefix = "0x";
		else if (tmp.type == 'X')
			spaces.prefix = "0X";
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

	while (spaces.zeroes-- > 0)
		str = ft_strjoin("0", str);
	str = ft_strjoin(spaces.prefix, str);
	while (spaces.start-- > 0)
		str = ft_strjoin(" ", str);
	while (spaces.end-- > 0)
		str = ft_strjoin(str, " ");
	ft_putstr(str);
	return(ft_strlen(str));
}

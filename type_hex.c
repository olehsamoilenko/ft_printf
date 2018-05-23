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

intmax_t	cast(va_list argptr, t_pattern tmp)
{
	intmax_t	nbr;

	if (tmp.cast != NONE || tmp.type == 'p')
		nbr = va_arg(argptr, size_t);
	else
		nbr = (unsigned int)va_arg(argptr, unsigned long);
	if (tmp.cast == H)
		nbr = (unsigned short)nbr;
	if (tmp.cast == HH)
		nbr = (unsigned char)nbr;
	return (nbr);
}

int	type_hex(va_list argptr, t_pattern tmp)
{
	intmax_t	nbr;
	char		*str;
	t_spaces	spaces;
	int			res;

	nbr = cast(argptr, tmp);

	if (nbr == 0 && tmp.precision == -1)
		str = ft_strdup("");
	else if (tmp.type == 'x' || tmp.type == 'p')
		str = itoa_base(nbr, 16, 0);
	else if (tmp.type == 'X')
		str = itoa_base(nbr, 16, 1);
	
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

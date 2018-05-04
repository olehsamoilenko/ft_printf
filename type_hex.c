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

void	type_hex(va_list argptr, t_pattern tmp)
{
	int nbr;
	char *str;
	t_spaces spaces;

	nbr = va_arg(argptr, int);
	if (tmp.type == 'x')
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
	if (tmp.hash == 1 && nbr > 0/*&& spaces.zeroes == 0*/)
	{
		spaces.hex += 1;
		spaces.start -= 2;
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

	while (spaces.start-- > 0)
		ft_putchar(' ');
	if (spaces.octal == 1)
		ft_putchar('0');
	if (spaces.hex == 1)
	{
		if (tmp.type == 'x')
			ft_putstr("0x");
		else if (tmp.type == 'X')
			ft_putstr("0X");
	}
	while (spaces.zeroes-- > 0)
		ft_putchar('0');
	ft_putstr(str);
	while (spaces.end-- > 0)
		ft_putchar(' ');
}

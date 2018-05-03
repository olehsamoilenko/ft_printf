/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 13:59:15 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/03 13:59:29 by osamoile         ###   ########.fr       */
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
	printf("type: %c\n", tmp.type);
}

t_spaces	new_spaces(void)
{
	t_spaces tmp;

	tmp.start = 0;
	tmp.end = 0;
	tmp.zeroes = 0;
	return (tmp);
}

void	type_o(va_list argptr, t_pattern tmp)
{
	int nbr;
	char *str;
	t_spaces spaces;

	nbr = va_arg(argptr, int);
	str = itoa_base(nbr, 8, 0);
	spaces = new_spaces();
	
	spaces.zeroes = tmp.precision - ft_strlen(str);
	if (spaces.zeroes < 0)
		spaces.zeroes = 0;
	spaces.start = tmp.width - spaces.zeroes - ft_strlen(str);
	if (spaces.start < 0)
		spaces.start = 0;
	if (tmp.hash == 1 && nbr > 0)
	{
		if (spaces.zeroes == 0)
		{
			spaces.zeroes += 1;
			spaces.start -= 1;
		}
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
	while (spaces.zeroes-- > 0)
		ft_putchar('0');
	ft_putstr(str);
	while (spaces.end-- > 0)
		ft_putchar(' ');
}

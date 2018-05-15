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

t_spaces	new_spaces(void)
{
	t_spaces tmp;

	tmp.start = 0;
	tmp.end = 0;
	tmp.zeroes = 0;
	tmp.prefix = 0;
	return (tmp);
}

int	type_o(va_list argptr, t_pattern tmp)
{
	int nbr;
	char *str;
	t_spaces spaces;

	nbr = va_arg(argptr, int);
	str = itoa_base(nbr, 8, 0);
	if (nbr == 0 && tmp.precision == -1)
		str = ft_strdup("");
	spaces = new_spaces();
	
	spaces.zeroes = tmp.precision - ft_strlen(str);
	if (spaces.zeroes < 0)
		spaces.zeroes = 0;
	spaces.start = tmp.width - spaces.zeroes - ft_strlen(str);
	if (spaces.start < 0)
		spaces.start = 0;
	if (tmp.hash == 1 && spaces.zeroes == 0)
	{
		// spaces.octal += 1;
		spaces.prefix = "0";
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

	while (spaces.zeroes-- > 0)
		str = ft_strjoin("0", str);
	str = ft_strjoin(spaces.prefix, str);
	while (spaces.start-- > 0)
		str = ft_strjoin(" ", str);
	while (spaces.end-- > 0)
		str = ft_strjoin(str, " ");
	ft_putstr(str);
	return(ft_strlen(str));
	// while (spaces.start-- > 0)
	// 	ft_putchar(' ');
	// ft_putstr(spaces.prefix);
	// while (spaces.zeroes-- > 0)
	// 	ft_putchar('0');
	// ft_putstr(str);
	// while (spaces.end-- > 0)
	// 	ft_putchar(' ');
}

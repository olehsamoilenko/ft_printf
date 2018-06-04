/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 13:01:44 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/10 13:01:47 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_c(int c, t_pattern tmp)
{
	char		*str;
	t_spaces	spaces;
	int			res;
	int			len;

	// str = ft_strnew(1);
	// str[0] = c;
	spaces = new_spaces();
	if (tmp.cast == L || tmp.type == 'C')
		spaces.start = tmp.width - get_size(c);
	else
		spaces.start = tmp.width - 1;
	// if (c == 0)
	// 	spaces.start--;
	if (spaces.start < 0)
		spaces.start = 0;
	if (tmp.minus == 1)
	{
		spaces.end = spaces.start;
		spaces.start = 0;
	}
	if (tmp.zero == 1)
	{
		spaces.zeroes = spaces.start;
		spaces.start = 0;
	}
	res = spaces.start + spaces.zeroes + spaces.end;
	while (spaces.start-- > 0)
		ft_putchar(' ');
	while (spaces.zeroes-- > 0)
		ft_putchar('0');
	if (tmp.type == 'C' || tmp.cast == L)
		res += ft_putchar(c);
	else
		res += ft_putchar((char)c);
	while (spaces.end-- > 0)
		ft_putchar(' ');
	return (res);
}

int	type_c(va_list argptr, t_pattern tmp)
{
	int		c;
	c = va_arg(argptr, int);
	return (print_c(c, tmp));
}

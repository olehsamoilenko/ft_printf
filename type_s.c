/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 14:15:59 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/10 14:16:04 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#define _7bits 127
#define _11bits 2047
#define _16bits 65535

int	type_s(va_list argptr, t_pattern tmp)
{
	int			*str;
	t_spaces	spaces;
	int			i;
	int			res;
	int len;


	str = va_arg(argptr, int*);
	if (str == 0)
	{
		str = (int*)ft_strdup("(null)");
		tmp.type = 's';
	}
	spaces = new_spaces();

		

	// printf("len: %d\n", len);
	
	
	if (tmp.precision > 0)
		str = (int*)ft_strsub((char*)str, 0, tmp.precision);
	if (tmp.precision == -1)
		str = (int*)ft_strdup("");

	if (tmp.type == 'S')
	{
		len = 0;
		i = -1;
		while (str[++i])
		{
			if (str[i] <= _7bits)
				len += 1;
			else if (str[i] <= _11bits)
				len += 2;
			else if (str[i] <= _16bits)
				len += 3;
			else
				len += 4;
		}
	}
	else
		len = ft_strlen((char*)str);

	// printf("check: %d\n", i);
	// if (i != 0)
	// 	spaces.zeroes = tmp.precision - i;
	// if (spaces.zeroes < 0)
	// 	spaces.zeroes = 0;
	// printf("zero: %d\n", spaces.zeroes);
	spaces.start = tmp.width - spaces.zeroes - len;
	if (spaces.start < 0)
		spaces.start = 0;
	// printf("start: %d\n", i);
	if (tmp.zero == 1)
	{
		spaces.zeroes = spaces.start;
		spaces.start = 0;
	}
	if (tmp.minus == 1)
	{
		spaces.end = spaces.start;
		spaces.start = 0;
	}

	
	res = 0;
	while (spaces.start-- > 0)
		res += ft_putchar(' ');
	while (spaces.zeroes-- > 0)
		res += ft_putchar('0');
	if (tmp.type == 'S' || ft_strequ(tmp.cast, "l") == 1)
	{
		i = -1;
		while (str[++i])
			res += ft_putchar(str[i]);
	}
	else
	{
		write(1, ((char*)str), ft_strlen((char*)(str)));
		res += ft_strlen((char*)(str));
	}
	while (spaces.end-- > 0)
		res += ft_putchar(' ');
	return (res);
	// return(ft_strlen((char*)(str)));
}

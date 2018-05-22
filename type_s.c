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

int	get_size(int c)
{
	if (c <= _7bits)
		return (1);
	else if (c <= _11bits)
		return (2);
	else if (c <= _16bits)
		return (3);
	else
		return (4);
}

int	type_s(va_list argptr, t_pattern tmp)
{
	int			*str;
	t_spaces	spaces;
	int			i;
	int			res;
	int 		len;
	int			num;


	str = va_arg(argptr, int*);
	if (str == 0)
	{
		str = (int*)ft_strdup("(null)");
		tmp.type = 's';
	}
	spaces = new_spaces();

	if (tmp.precision == -1)
		str = (int*)ft_strdup("");

	if (tmp.type == 'S' || ft_strequ(tmp.cast, "l") == 1)
	{
		len = 0;
		i = -1;
		num = 0;
		while (str[++i])
		{
			if (tmp.precision > 0)
			{
				if (len + get_size(str[i]) <= tmp.precision)
				{
					len += get_size(str[i]);
					num += 1;
				}
			}
			else
			{
				len += get_size(str[i]);
				num += 1;
			}
		}

	}
	else
	{
		if (tmp.precision > 0)
			str = (int*)ft_strsub((char*)str, 0, tmp.precision);
		len = ft_strlen((char*)str);

		// num = tmp.precision > len ? tmp.precision : len ;
	}

	// printf("len %d\n", len);
	// printf("num %d\n", num);

	// i = -1;
	// while (str[++i])
	// 	printf("%i\n", str[i]);

	

	


	spaces.start = tmp.width - spaces.zeroes - len;
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

	res = 0;
	while (spaces.start-- > 0)
		res += ft_putchar(' ');
	while (spaces.zeroes-- > 0)
		res += ft_putchar('0');
	if (tmp.type == 'S' || ft_strequ(tmp.cast, "l") == 1)
	{
		i = -1;
		while (str[++i] && num-- > 0)
		{
			res += ft_putchar(str[i]);
		}
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

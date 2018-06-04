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
	if (c <= _7bits || MB_CUR_MAX != 4)
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
	char		*buf;
	int			*str;
	t_spaces	spaces;
	int			i;
	int			res;
	int 		len;
	int			num;


	str = va_arg(argptr, int*);
	if (str == 0)
	{
		// buf = str;
		str = (int*)"(null)";
		// ft_strdel(&buf);
		tmp.type = 's';
	}
	spaces = new_spaces();

	if (tmp.precision == -1)
	{
		// buf = str;
		str = (int*)ft_strdup("");
		// ft_strdel(&buf);
	}


	if (tmp.type == 'S' || tmp.cast == L)
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
		{

			buf = ft_strsub((char*)str, 0, tmp.precision);
			str = (int*)buf;
			ft_strdel(&buf);



			
		}
		len = ft_strlen((char*)str);

	}


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
	// printf("TEST: %s\n", str);
	if ((tmp.type == 'S' || tmp.cast == L) && ft_strequ(str, "(null)") == 0)
	{
		i = -1;
		// printf("%d\n", spaces.len);
		while (str[++i] && num-- > 0/* && spaces.len-- > 0*/)
		{
			res += ft_putchar(str[i]);
		}
	}
	else
	{

		res += ft_putstr((char*)str);

	}
	// ft_strdel(&str);
	// buf = str;
	// ft_strdel(&buf);

	while (spaces.end-- > 0)
		res += ft_putchar(' ');
	return (res);

}

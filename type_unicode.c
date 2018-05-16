/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_unicode.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 13:01:44 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/10 13:01:47 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#define _7bits 127
#define _11bits 2047
#define _16bits 65535
#define _00000111 7
#define _00001111 15
#define _00011111 31
#define _00111111 63
#define _10000000 128
#define _11000000 192
#define _11100000 224
#define _11110000 240

int	type_unicode(va_list argptr, t_pattern tmp)
{
	int				c;
	unsigned char	code[4];

	c = va_arg(argptr, int);
	if (c <= _7bits || MB_CUR_MAX != 4)
	{
		write(1, &c, 1);
		return (1);
	}
	else if (c <= _11bits)
	{
		code[0] = (c >> 6 & _00011111) | _11000000;
		code[1] = (c & _00111111) | _10000000;
		write(1, &code, 2);
		return (2);
	}
	else if (c <= _16bits)
	{
		code[0] = (c >> 12 & _00001111) | _11100000;
		code[1] = (c >> 6 & _00111111) | _10000000;
		code[2] = (c & _00111111) | _10000000;
		write(1, &code, 3);
		return (3);
	}
	else
	{
		code[0] = (c >> 18 & _00000111) | _11110000;
		code[1] = (c >> 12 & _00111111) | _10000000;
		code[2] = (c >> 6 & _00111111) | _10000000;
		code[3] = (c & _00111111) | _10000000;
		write(1, &code, 4);
		return (4);
	}
}

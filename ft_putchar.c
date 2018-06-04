/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:30:02 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/27 14:30:04 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#define _7bits 127 /* 01111111 */
#define _8bits 255
#define _11bits 2047 /* 00000111 11111111 */
#define _16bits 65535 /* 11111111 11111111 */
#define _00000111 7
#define _00001111 15
#define _00011111 31
#define _00111111 63
#define _10000000 128
#define _11000000 192
#define _11100000 224
#define _11110000 240

int		get_size(int c)
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

int		ft_putchar(int c)
{
	unsigned char	code[4];

	if (c <= _7bits || MB_CUR_MAX != 4)
		write(1, &c, 1);
	else if (c <= _11bits)
	{
		code[0] = (c >> 6 & _00011111) | _11000000;
		code[1] = (c & _00111111) | _10000000;
		write(1, &code, 2);
	}
	else if (c <= _16bits)
	{
		code[0] = (c >> 12 & _00001111) | _11100000;
		code[1] = (c >> 6 & _00111111) | _10000000;
		code[2] = (c & _00111111) | _10000000;
		write(1, &code, 3);
	}
	else
	{
		code[0] = (c >> 18 & _00000111) | _11110000;
		code[1] = (c >> 12 & _00111111) | _10000000;
		code[2] = (c >> 6 & _00111111) | _10000000;
		code[3] = (c & _00111111) | _10000000;
		write(1, &code, 4);
	}
	return (get_size(c));
}

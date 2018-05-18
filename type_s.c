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

int	type_s(va_list argptr, t_pattern tmp)
{
	int			*str;
	t_spaces	spaces;
	int			i;
	int			res;
	char c;

	// if (tmp.type == 'S' || ft_strequ(tmp.cast, "l"))
	str = va_arg(argptr, int*);
	// else
		// str = va_arg(argptr, int*);
		

	if (str == 0)
	{
		str = (int*)ft_strdup("(null)");
		tmp.type = 's';
	}
	spaces = new_spaces();
	
	
	if (tmp.precision > 0)
		str = (int*)ft_strsub((char*)str, 0, tmp.precision);
	if (spaces.zeroes < 0)
		spaces.zeroes = 0;
	spaces.start = tmp.width /*- spaces.zeroes*/ - ft_strlen((char*)str);
	if (spaces.start < 0)
		spaces.start = 0;
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
	// res = 0;
	// i = -1;
	// while (str[++i])
	// {
	// 	res += ft_putchar(str[i]);
	// }
	
	
	// show_tmp(tmp);
	// ft_printf("spaces.start: %d\n", spaces.start);
	// ft_printf("spaces.end: %d\n", spaces.end);
	// ft_printf("spaces.zeroes: %d\n", spaces.zeroes);
	

	while (spaces.zeroes-- > 0)
		str = (int*)ft_strjoin("0", (char*)str);
	while (spaces.start-- > 0)
		str = (int*)ft_strjoin(" ", (char*)str);
	while (spaces.end-- > 0)
		str = (int*)ft_strjoin((char*)str, " ");
	if (tmp.type == 'S' || tmp.cast == 'l')
	{
		res = 0;
		i = -1;
		// printf("HERE!\n");
		// printf("%d\n", str[i]);
		while (str[++i])
			res += ft_putchar(str[i]);
		return (res);
	}
	else
	{
		write(1, ((char*)str), ft_strlen((char*)(str)));
		return (ft_strlen((char*)(str)));
	}
	// return(ft_strlen((char*)(str)));
}

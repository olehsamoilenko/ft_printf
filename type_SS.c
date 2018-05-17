/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_SS.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 14:15:59 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/10 14:16:04 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	type_SS(va_list argptr, t_pattern tmp)
{
	int			*str;
	t_spaces	spaces;
	int			i;
	int			res;

	str = va_arg(argptr, int*);

	if (str == 0)
	{
		ft_putstr("(null)");
		return (6);
	}
	// spaces = new_spaces();
	
	
	// if (tmp.precision > 0)
	// 	str = ft_strsub(str, 0, tmp.precision);
	// if (spaces.zeroes < 0)
	// 	spaces.zeroes = 0;
	// spaces.start = tmp.width /*- spaces.zeroes*/ - ft_strlen(str);
	// if (spaces.start < 0)
	// 	spaces.start = 0;
	// if (tmp.minus == 1)
	// {
	// 	spaces.end = spaces.start;
	// 	spaces.start = 0;
	// }
	res = 0;
	i = -1;
	while (str[++i])
	{
		res += ft_putchar(str[i]);
	}
	return (res);
	
	// show_tmp(tmp);
	// ft_printf("spaces.start: %d\n", spaces.start);
	// ft_printf("spaces.end: %d\n", spaces.end);
	// ft_printf("spaces.zeroes: %d\n", spaces.zeroes);

	// while (spaces.zeroes-- > 0)
	// 	str = ft_strjoin("0", str);
	// str = ft_strjoin(spaces.prefix, str);
	// while (spaces.start-- > 0)
	// 	str = ft_strjoin(" ", str);
	// while (spaces.end-- > 0)
	// 	str = ft_strjoin(str, " ");
	// ft_putstr(str);
	// return(ft_strlen(str));
}

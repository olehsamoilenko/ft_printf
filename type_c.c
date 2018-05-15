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

int	type_c(va_list argptr, t_pattern tmp)
{
	int c;
	char *str;
	t_spaces spaces;
	int res;

	// ft_putchar(c)
	c = va_arg(argptr, int);
	str = ft_strnew(1);
	str[0] = c;
	spaces = new_spaces();
	spaces.start = tmp.width - ft_strlen(str);
	if (c == 0)
		spaces.start--;
	if (spaces.start < 0)
		spaces.start = 0;
	if (tmp.minus == 1)
	{
		spaces.end = spaces.start;
		spaces.start = 0;
	}
	// while (spaces.zeroes-- > 0)
	// 	str = ft_strjoin("0", str);
	// str = ft_strjoin(spaces.prefix, str);
	res = spaces.start + 1 + spaces.end;
	while (spaces.start-- > 0)
		ft_putchar(' ');
		// str = ft_strjoin(" ", str);
	ft_putchar(c);
	while (spaces.end-- > 0)
		ft_putchar(' ');
		// str = ft_strjoin(str, " ");
	
	
	return(res);
}

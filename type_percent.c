/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 14:43:41 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/10 14:43:45 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	type_persent(va_list argptr, t_pattern tmp)
{
	int nbr;
	char *str;
	t_spaces spaces;

	str = ft_strdup("%");
	spaces = new_spaces();
	spaces.start = tmp.width - ft_strlen(str);
	if (spaces.start < 0)
		spaces.start = 0;
	if (tmp.minus == 1)
	{
		spaces.end = spaces.start;
		spaces.start = 0;
	}

	while (spaces.start-- > 0)
		str = ft_strjoin(" ", str);
	while (spaces.end-- > 0)
		str = ft_strjoin(str, " ");
	ft_putstr(str);
	return(ft_strlen(str));
}

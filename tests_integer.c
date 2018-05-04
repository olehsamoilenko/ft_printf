/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 10:51:12 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/04 10:51:13 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	tests_integer(void)
{
	int i = 123456;
	int j = 1;

	printf("%d OR: %i@\n", j, i);
	ft_printf("%d FT: %i@\n", j, i);
	j++;
	printf("%d OR: %i@\n", j, -i);
	ft_printf("%d FT: %i@\n", j, -i);
	j++;
	printf("%d OR: %i@\n", j, 0);
	ft_printf("%d FT: %i@\n", j, 0);
	j++;
}

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
	int j;
	int min = -2147483648;
	int max = 2147483647;

	// ft_printf("========== simple ==========\n"); j = 1;

	// printf("%d OR: %i@\n", j, i); // simple
	// ft_printf("%d FT: %i@\n", j, i);
	// j++;
	// printf("%d OR: %i@\n", j, -i);
	// ft_printf("%d FT: %i@\n", j, -i);
	// j++;
	// printf("%d OR: %i@\n", j, 0);
	// ft_printf("%d FT: %i@\n", j, 0);
	// j++;
	// printf("%d OR: %i@\n", j, min);
	// ft_printf("%d FT: %i@\n", j, min);
	// j++;
	// printf("%d OR: %i@\n", j, max);
	// ft_printf("%d FT: %i@\n", j, max);
	// j++;

	// ft_printf("========== width ==========\n"); j = 1;

	// printf("%d OR: %3i@\n", j, i); // width
	// ft_printf("%d FT: %3i@\n", j, i);
	// j++;
	// printf("%d OR: %20i@\n", j, i);
	// ft_printf("%d FT: %20i@\n", j, i);
	// j++;
	// printf("%d OR: %3i@\n", j, -i);
	// ft_printf("%d FT: %3i@\n", j, -i);
	// j++;
	// printf("%d OR: %20i@\n", j, -i);
	// ft_printf("%d FT: %20i@\n", j, -i);
	// j++;
	// printf("%d OR: %10i@\n", j, 0);
	// ft_printf("%d FT: %10i@\n", j, 0);
	// j++;
	// printf("%d OR: %20i@\n", j, min);
	// ft_printf("%d FT: %20i@\n", j, min);
	// j++;
	// printf("%d OR: %20i@\n", j, max);
	// ft_printf("%d FT: %20i@\n", j, max);
	// j++;

	printf("%0i\n", i);
	printf("% +i\n", i);
	printf("%-0i\n", i);
	printf("%+i\n", i);
	// printf("%#i\n", i);
}

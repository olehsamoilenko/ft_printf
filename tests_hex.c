/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 18:25:42 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/03 18:25:54 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	tests_hex(void)
{
	int i = 139451;
	int j = 1;
	int value;

	ft_printf("========== width ==========\n"); j = 1;

	value = printf("%d OR: %20x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %20x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== precision ==========\n"); j = 1;

	value = printf("%d OR: %.20x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %.20x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#x@ ", j, i); printf("VALUE: %d\n", value); // hash
	value = ft_printf("%d FT: %#x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== width + precision ==========\n"); j = 1;

	value = printf("%d OR: %5.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %5.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10.15x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %10.15x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %15.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %15.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %10.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %5.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %2.3x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %2.3x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %3.2x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %3.2x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %3.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %3.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5.3x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %5.3x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== hash + width ==========\n"); j = 1;

	value = printf("%d OR: %#20x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#20x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== hash + precision ==========\n"); j = 1;

	value = printf("%d OR: %#.20x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#.20x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#10.15x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#10.15x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#15.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#15.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#10.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#10.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#2.3x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#2.3x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#3.2x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#3.2x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#3.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#3.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5.3x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5.3x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + width ==========\n"); j = 1;

	value = printf("%d OR: %-5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + precision ==========\n"); j = 1;

	value = printf("%d OR: %-.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-5.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10.15x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10.15x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-15.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-15.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-5.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-2.3x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-2.3x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-3.2x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-3.2x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-3.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-3.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-5.3x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5.3x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + width ==========\n"); j = 1;

	value = printf("%d OR: %05x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %05x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %020x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %020x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %05x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %05x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + precision ==========\n"); j = 1;

	value = printf("%d OR: %0.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %0.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %0.20x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %0.20x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %0.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %0.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %05.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %05.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %010.15x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %010.15x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %015.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %015.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %010.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %010.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %05.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %05.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %02.3x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %02.3x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %03.2x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %03.2x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %03.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %03.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %05.3x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %05.3x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %#05.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#05.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#010.15x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#010.15x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#015.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#015.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#010.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#010.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#05.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#05.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#02.3x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#02.3x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#03.2x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#03.2x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#03.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#03.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#05.3x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#05.3x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#10.15x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#10.15x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#15.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#15.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#10.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#10.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#2.3x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#2.3x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#3.2x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#3.2x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#3.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#3.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#5.3x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#5.3x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + zero + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-05.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-05.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-010.15x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-010.15x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-015.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-015.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-010.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-010.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-05.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-05.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-02.3x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-02.3x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-03.2x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-03.2x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-03.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-03.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-05.3x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-05.3x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + zero + hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-0#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#10.15x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#10.15x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#15.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#15.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#10.5x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#10.5x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#5.10x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#2.3x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#2.3x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#3.2x@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#3.2x@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#3.5x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#3.5x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#5.3x@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#5.3x@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== width ==========\n"); j = 1;

	value = printf("%d OR: %20X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %20X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== precision ==========\n"); j = 1;

	value = printf("%d OR: %.20X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %.20X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#X@ ", j, i); printf("VALUE: %d\n", value); // hash
	value = ft_printf("%d FT: %#X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== width + precision ==========\n"); j = 1;

	value = printf("%d OR: %5.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %5.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10.15X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %10.15X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %15.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %15.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %10.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %5.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %2.3X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %2.3X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %3.2X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %3.2X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %3.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %3.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5.3X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %5.3X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== hash + width ==========\n"); j = 1;

	value = printf("%d OR: %#20X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#20X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== hash + precision ==========\n"); j = 1;

	value = printf("%d OR: %#.20X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#.20X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#10.15X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#10.15X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#15.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#15.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#10.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#10.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#2.3X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#2.3X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#3.2X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#3.2X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#3.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#3.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5.3X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5.3X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + width ==========\n"); j = 1;

	value = printf("%d OR: %-5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + precision ==========\n"); j = 1;

	value = printf("%d OR: %-.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-5.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10.15X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10.15X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-15.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-15.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-5.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-2.3X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-2.3X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-3.2X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-3.2X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-3.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-3.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-5.3X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5.3X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + width ==========\n"); j = 1;

	value = printf("%d OR: %05X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %05X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %020X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %020X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %05X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %05X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + precision ==========\n"); j = 1;

	value = printf("%d OR: %0.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %0.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %0.20X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %0.20X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %0.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %0.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %05.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %05.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %010.15X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %010.15X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %015.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %015.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %010.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %010.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %05.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %05.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %02.3X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %02.3X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %03.2X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %03.2X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %03.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %03.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %05.3X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %05.3X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %#05.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#05.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#010.15X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#010.15X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#015.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#015.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#010.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#010.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#05.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#05.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#02.3X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#02.3X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#03.2X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#03.2X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#03.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#03.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#05.3X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %#05.3X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#10.15X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#10.15X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#15.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#15.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#10.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#10.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#2.3X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#2.3X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#3.2X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#3.2X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#3.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#3.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#5.3X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#5.3X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + zero + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-05.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-05.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-010.15X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-010.15X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-015.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-015.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-010.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-010.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-05.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-05.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-02.3X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-02.3X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-03.2X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-03.2X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-03.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-03.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-05.3X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-05.3X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + zero + hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-0#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#10.15X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#10.15X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#15.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#15.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#10.5X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#10.5X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#5.10X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#2.3X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#2.3X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#3.2X@ ", j, i); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#3.2X@ ", j, i); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#3.5X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#3.5X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#5.3X@ ", j, 0); printf("VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#5.3X@ ", j, 0); printf("VALUE: %d\n", value);
	j++;
}

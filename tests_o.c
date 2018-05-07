/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 18:23:06 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/03 18:23:11 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	tests_o(void)
{
	int i = 1335345;
	int j = 1;
	int value;

	ft_printf("========== width ==========\n"); j = 1;

	value = printf("%d OR: %20o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %20o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== precision ==========\n"); j = 1;

	value = printf("%d OR: %.20o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %.20o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#o@", j, i); printf(" VALUE: %d\n", value); // hash
	value = ft_printf("%d FT: %#o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== width + precision ==========\n"); j = 1;

	value = printf("%d OR: %5.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %5.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10.15o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %10.15o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %15.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %15.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %10.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %5.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %2.3o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %2.3o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %3.2o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %3.2o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %3.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %3.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %5.3o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %5.3o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== hash + width ==========\n"); j = 1;

	value = printf("%d OR: %#20o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#20o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== hash + precision ==========\n"); j = 1;

	value = printf("%d OR: %#.20o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#.20o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %#5.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#10.15o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#10.15o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#15.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#15.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#10.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#10.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#2.3o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#2.3o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#3.2o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#3.2o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#3.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#3.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#5.3o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#5.3o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + width ==========\n"); j = 1;

	value = printf("%d OR: %-5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + precision ==========\n"); j = 1;

	value = printf("%d OR: %-.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-5.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10.15o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10.15o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-15.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-15.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-5.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-2.3o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-2.3o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-3.2o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-3.2o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-3.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-3.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-5.3o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-5.3o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + width ==========\n"); j = 1;

	value = printf("%d OR: %05o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %05o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %020o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %020o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %05o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %05o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + precision ==========\n"); j = 1;

	value = printf("%d OR: %0.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %0.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %0.20o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %0.20o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %0.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %0.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %05.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %05.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %010.15o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %010.15o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %015.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %015.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %010.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %010.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %05.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %05.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %02.3o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %02.3o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %03.2o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %03.2o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %03.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %03.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %05.3o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %05.3o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== zero + hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %#05.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#05.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#010.15o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#010.15o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#015.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#015.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#010.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#010.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#05.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#05.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#02.3o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#02.3o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#03.2o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#03.2o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#03.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#03.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %#05.3o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %#05.3o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-#5.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#5.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#10.15o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#10.15o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#15.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#15.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#10.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#10.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#5.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#5.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#2.3o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#2.3o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#3.2o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#3.2o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#3.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#3.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-#5.3o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-#5.3o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + zero + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-05.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-05.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-010.15o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-010.15o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-015.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-015.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-010.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-010.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-05.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-05.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-02.3o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-02.3o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-03.2o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-03.2o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-03.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-03.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-05.3o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-05.3o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== minus + zero + hash + width + precision ==========\n"); j = 1;

	value = printf("%d OR: %-0#5.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#5.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#10.15o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#10.15o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#15.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#15.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#10.5o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#10.5o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#5.10o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#5.10o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#2.3o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#2.3o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#3.2o@", j, i); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#3.2o@", j, i); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#3.5o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#3.5o@", j, 0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-0#5.3o@", j, 0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-0#5.3o@", j, 0); printf(" VALUE: %d\n", value);
	j++;

	// ft_printf("%o@", -i); printf(" VALUE: %d\n", value); // undefined behaviour
	// ft_printf("%20o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%.20o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%#o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%-20o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%020o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%0.20o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%#20o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%#.20o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%010.20o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%#10.20o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%-10.20o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%#010.20o@", -i); printf(" VALUE: %d\n", value);
	// ft_printf("%#-10.20o@", -i); printf(" VALUE: %d\n", value);
}

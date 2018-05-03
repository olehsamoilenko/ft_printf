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

	// printf("%d OR: %20o\n", j, i); // width
	// ft_printf("%d MY: %20o\n", j, i);
	// j++;
	// printf("%d OR: %5o\n", j, i);
	// ft_printf("%d MY: %5o\n", j, i);
	// j++;
	// printf("%d OR: %5o\n", j, 0);
	// ft_printf("%d MY: %5o\n", j, 0);
	// j++;
	// printf("%d OR: %.20o\n", j, i); // precision
	// ft_printf("%d MY: %.20o\n", j, i);
	// j++;
	// printf("%d OR: %.5o\n", j, i);
	// ft_printf("%d MY: %.5o\n", j, i);
	// j++;
	// printf("%d OR: %.5o\n", j, 0);
	// ft_printf("%d MY: %.5o\n", j, 0);
	// j++;
	// printf("%d OR: %#o\n", j, i); // hash
	// ft_printf("%d MY: %#o\n", j, i);
	// j++;
	// printf("%d OR: %#5o\n", j, 0);
	// ft_printf("%d MY: %#5o\n", j, 0);
	// j++;

	// printf("%d OR: %-5o\n", j, i); // minus + width
	// ft_printf("%d MY: %-5o\n", j, i);
	// j++;
	// printf("%d OR: %-10o\n", j, i);
	// ft_printf("%d MY: %-10o\n", j, i);
	// j++;
	// printf("%d OR: %-5o\n", j, 0);
	// ft_printf("%d MY: %-5o\n", j, 0);
	// j++;
	// printf("%d OR: %05o\n", j, i); // zero + width
	// ft_printf("%d MY: %05o\n", j, i);
	// j++;
	// printf("%d OR: %020o\n", j, i);
	// ft_printf("%d MY: %020o\n", j, i);
	// j++;
	// printf("%d OR: %05o\n", j, 0);
	// ft_printf("%d MY: %05o\n", j, 0);
	// j++;
	// printf("%d OR: %0.5o\n", j, i); // zero + precision
	// ft_printf("%d MY: %0.5o\n", j, i);
	// j++;
	// printf("%d OR: %0.20o\n", j, i);
	// ft_printf("%d MY: %0.20o\n", j, i);
	// j++;
	// printf("%d OR: %0.5o\n", j, 0);
	// ft_printf("%d MY: %0.5o\n", j, 0);
	// j++;

	// printf("%d OR: %#20o\n", j, i); // hash + width
	// ft_printf("%d MY: %#20o\n", j, i);
	// j++;
	// printf("%d OR: %#5o\n", j, i);
	// ft_printf("%d MY: %#5o\n", j, i);
	// j++;
	// printf("%d OR: %#5o\n", j, 0);
	// ft_printf("%d MY: %#5o\n", j, 0);
	// j++;
	// printf("%d OR: %#.20o\n", j, i); // hash + precision
	// ft_printf("%d MY: %#.20o\n", j, i);
	// j++;
	// printf("%d OR: %#.5o\n", j, i);
	// ft_printf("%d MY: %#.5o\n", j, i);
	// j++;
	// printf("%d OR: %#.5o\n", j, 0);
	// ft_printf("%d MY: %#.5o\n", j, 0);
	// j++;

	// printf("%d OR: %5.10o\n", j, i); // width + precision
	// ft_printf("%d MY: %5.10o\n", j, i);
	// j++;
	// printf("%d OR: %10.15o\n", j, i);
	// ft_printf("%d MY: %10.15o\n", j, i);
	// j++;
	// printf("%d OR: %15.10o\n", j, i);
	// ft_printf("%d MY: %15.10o\n", j, i);
	// j++;
	// printf("%d OR: %10.5o\n", j, i);
	// ft_printf("%d MY: %10.5o\n", j, i);
	// j++;
	// printf("%d OR: %5.10o\n", j, i);
	// ft_printf("%d MY: %5.10o\n", j, i);
	// j++;
	// printf("%d OR: %2.3o\n", j, i);
	// ft_printf("%d MY: %2.3o\n", j, i);
	// j++;
	// printf("%d OR: %3.2o\n", j, i);
	// ft_printf("%d MY: %3.2o\n", j, i);
	// j++;
	// printf("%d OR: %3.5o\n", j, 0);
	// ft_printf("%d MY: %3.5o\n", j, 0);
	// j++;
	// printf("%d OR: %5.3o\n", j, 0);
	// ft_printf("%d MY: %5.3o\n", j, 0);
	// j++;

	// printf("%d OR: %05.10o\n", j, i); // width + precision + zero
	// ft_printf("%d MY: %05.10o\n", j, i);
	// j++;
	// printf("%d OR: %010.15o\n", j, i);
	// ft_printf("%d MY: %010.15o\n", j, i);
	// j++;
	// printf("%d OR: %015.10o\n", j, i);
	// ft_printf("%d MY: %015.10o\n", j, i);
	// j++;
	// printf("%d OR: %010.5o\n", j, i);
	// ft_printf("%d MY: %010.5o\n", j, i);
	// j++;
	// printf("%d OR: %05.10o\n", j, i);
	// ft_printf("%d MY: %05.10o\n", j, i);
	// j++;
	// printf("%d OR: %02.3o\n", j, i);
	// ft_printf("%d MY: %02.3o\n", j, i);
	// j++;
	// printf("%d OR: %03.2o\n", j, i);
	// ft_printf("%d MY: %03.2o\n", j, i);
	// j++;
	// printf("%d OR: %03.5o\n", j, 0);
	// ft_printf("%d MY: %03.5o\n", j, 0);
	// j++;
	// printf("%d OR: %05.3o\n", j, 0);
	// ft_printf("%d MY: %05.3o\n", j, 0);
	// j++;

	// printf("%d OR: %#5.10o\n", j, i); // width + precision + hash
	// ft_printf("%d MY: %#5.10o\n", j, i);
	// j++;
	// printf("%d OR: %#10.15o\n", j, i);
	// ft_printf("%d MY: %#10.15o\n", j, i);
	// j++;
	// printf("%d OR: %#15.10o\n", j, i);
	// ft_printf("%d MY: %#15.10o\n", j, i);
	// j++;
	// printf("%d OR: %#10.5o\n", j, i);
	// ft_printf("%d MY: %#10.5o\n", j, i);
	// j++;
	// printf("%d OR: %#5.10o\n", j, i);
	// ft_printf("%d MY: %#5.10o\n", j, i);
	// j++;
	// printf("%d OR: %#2.3o\n", j, i);
	// ft_printf("%d MY: %#2.3o\n", j, i);
	// j++;
	// printf("%d OR: %#3.2o\n", j, i);
	// ft_printf("%d MY: %#3.2o\n", j, i);
	// j++;
	// printf("%d OR: %#3.5o\n", j, 0);
	// ft_printf("%d MY: %#3.5o\n", j, 0);
	// j++;
	// printf("%d OR: %#5.3o\n", j, 0);
	// ft_printf("%d MY: %#5.3o\n", j, 0);
	// j++;

	// printf("%d OR: %-5.10o\n", j, i); // width + precision + minus
	// ft_printf("%d MY: %-5.10o\n", j, i);
	// j++;
	// printf("%d OR: %-10.15o\n", j, i);
	// ft_printf("%d MY: %-10.15o\n", j, i);
	// j++;
	// printf("%d OR: %-15.10o\n", j, i);
	// ft_printf("%d MY: %-15.10o\n", j, i);
	// j++;
	// printf("%d OR: %-10.5o\n", j, i);
	// ft_printf("%d MY: %-10.5o\n", j, i);
	// j++;
	// printf("%d OR: %-5.10o\n", j, i);
	// ft_printf("%d MY: %-5.10o\n", j, i);
	// j++;
	// printf("%d OR: %-2.3o\n", j, i);
	// ft_printf("%d MY: %-2.3o\n", j, i);
	// j++;
	// printf("%d OR: %-3.2o\n", j, i);
	// ft_printf("%d MY: %-3.2o\n", j, i);
	// j++;
	// printf("%d OR: %-3.5o\n", j, 0);
	// ft_printf("%d MY: %-3.5o\n", j, 0);
	// j++;
	// printf("%d OR: %-5.3o\n", j, 0);
	// ft_printf("%d MY: %-5.3o\n", j, 0);
	// j++;

	// printf("%d OR: %#05.10o\n", j, i); // width + precision + hash + zero
	// ft_printf("%d MY: %#05.10o\n", j, i);
	// j++;
	// printf("%d OR: %#010.15o\n", j, i);
	// ft_printf("%d MY: %#010.15o\n", j, i);
	// j++;
	// printf("%d OR: %#015.10o\n", j, i);
	// ft_printf("%d MY: %#015.10o\n", j, i);
	// j++;
	// printf("%d OR: %#010.5o\n", j, i);
	// ft_printf("%d MY: %#010.5o\n", j, i);
	// j++;
	// printf("%d OR: %#05.10o\n", j, i);
	// ft_printf("%d MY: %#05.10o\n", j, i);
	// j++;
	// printf("%d OR: %#02.3o\n", j, i);
	// ft_printf("%d MY: %#02.3o\n", j, i);
	// j++;
	// printf("%d OR: %#03.2o\n", j, i);
	// ft_printf("%d MY: %#03.2o\n", j, i);
	// j++;
	// printf("%d OR: %#03.5o\n", j, 0);
	// ft_printf("%d MY: %#03.5o\n", j, 0);
	// j++;
	// printf("%d OR: %#05.3o\n", j, 0);
	// ft_printf("%d MY: %#05.3o\n", j, 0);
	// j++;

	printf("%d OR: %-#5.10o\n", j, i); // width + precision + hash + minus
	ft_printf("%d MY: %-#5.10o\n", j, i);
	j++;
	printf("%d OR: %-#10.15o\n", j, i);
	ft_printf("%d MY: %-#10.15o\n", j, i);
	j++;
	printf("%d OR: %-#15.10o\n", j, i);
	ft_printf("%d MY: %-#15.10o\n", j, i);
	j++;
	printf("%d OR: %-#10.5o\n", j, i);
	ft_printf("%d MY: %-#10.5o\n", j, i);
	j++;
	printf("%d OR: %-#5.10o\n", j, i);
	ft_printf("%d MY: %-#5.10o\n", j, i);
	j++;
	printf("%d OR: %-#2.3o\n", j, i);
	ft_printf("%d MY: %-#2.3o\n", j, i);
	j++;
	printf("%d OR: %-#3.2o\n", j, i);
	ft_printf("%d MY: %-#3.2o\n", j, i);
	j++;
	printf("%d OR: %#-3.5o\n", j, 0);
	ft_printf("%d MY: %#-3.5o\n", j, 0);
	j++;
	printf("%d OR: %#-5.3o\n", j, 0);
	ft_printf("%d MY: %#-5.3o\n", j, 0);
	j++;

	// ft_printf("%o\n", -i); // undefined behaviour
	// ft_printf("%20o\n", -i);
	// ft_printf("%.20o\n", -i);
	// ft_printf("%#o\n", -i);
	// ft_printf("%-20o\n", -i);
	// ft_printf("%020o\n", -i);
	// ft_printf("%0.20o\n", -i);
	// ft_printf("%#20o\n", -i);
	// ft_printf("%#.20o\n", -i);
	// ft_printf("%010.20o\n", -i);
	// ft_printf("%#10.20o\n", -i);
	// ft_printf("%-10.20o\n", -i);
	// ft_printf("%#010.20o\n", -i);
	// ft_printf("%#-10.20o\n", -i);
}

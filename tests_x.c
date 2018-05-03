/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 18:25:42 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/03 18:25:54 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	tests_x(void)
{
	int i = 139451;
	int j = 1;

	printf("%d OR: %20x\n", j, i); // width
	ft_printf("%d MY: %20x\n", j, i);
	j++;
	printf("%d OR: %5x\n", j, i);
	ft_printf("%d MY: %5x\n", j, i);
	j++;
	printf("%d OR: %5x\n", j, 0);
	ft_printf("%d MY: %5x\n", j, 0);
	j++;
	printf("%d OR: %.20x\n", j, i); // precision
	ft_printf("%d MY: %.20x\n", j, i);
	j++;
	printf("%d OR: %.5x\n", j, i);
	ft_printf("%d MY: %.5x\n", j, i);
	j++;
	printf("%d OR: %.5x\n", j, 0);
	ft_printf("%d MY: %.5x\n", j, 0);
	j++;
	printf("%d OR: %#x\n", j, i); // hash
	ft_printf("%d MY: %#x\n", j, i);
	j++;
	printf("%d OR: %#5x\n", j, 0);
	ft_printf("%d MY: %#5x\n", j, 0);
	j++;

	printf("%d OR: %-5x\n", j, i); // minus + width
	ft_printf("%d MY: %-5x\n", j, i);
	j++;
	printf("%d OR: %-10x\n", j, i);
	ft_printf("%d MY: %-10x\n", j, i);
	j++;
	printf("%d OR: %-5x\n", j, 0);
	ft_printf("%d MY: %-5x\n", j, 0);
	j++;
	printf("%d OR: %05x\n", j, i); // zero + width
	ft_printf("%d MY: %05x\n", j, i);
	j++;
	printf("%d OR: %020x\n", j, i);
	ft_printf("%d MY: %020x\n", j, i);
	j++;
	printf("%d OR: %05x\n", j, 0);
	ft_printf("%d MY: %05x\n", j, 0);
	j++;
	printf("%d OR: %0.5x\n", j, i); // zero + precision
	ft_printf("%d MY: %0.5x\n", j, i);
	j++;
	printf("%d OR: %0.20x\n", j, i);
	ft_printf("%d MY: %0.20x\n", j, i);
	j++;
	printf("%d OR: %0.5x\n", j, 0);
	ft_printf("%d MY: %0.5x\n", j, 0);
	j++;

	printf("%d OR: %#20x\n", j, i); // hash + width
	ft_printf("%d MY: %#20x\n", j, i);
	j++;
	printf("%d OR: %#5x\n", j, i);
	ft_printf("%d MY: %#5x\n", j, i);
	j++;
	printf("%d OR: %#5x\n", j, 0);
	ft_printf("%d MY: %#5x\n", j, 0);
	j++;
	printf("%d OR: %#.20x\n", j, i); // hash + precision
	ft_printf("%d MY: %#.20x\n", j, i);
	j++;
	printf("%d OR: %#.5x\n", j, i);
	ft_printf("%d MY: %#.5x\n", j, i);
	j++;
	printf("%d OR: %#.5x\n", j, 0);
	ft_printf("%d MY: %#.5x\n", j, 0);
	j++;

	printf("%d OR: %5.10x\n", j, i); // width + precision
	ft_printf("%d MY: %5.10x\n", j, i);
	j++;
	printf("%d OR: %10.15x\n", j, i);
	ft_printf("%d MY: %10.15x\n", j, i);
	j++;
	printf("%d OR: %15.10x\n", j, i);
	ft_printf("%d MY: %15.10x\n", j, i);
	j++;
	printf("%d OR: %10.5x\n", j, i);
	ft_printf("%d MY: %10.5x\n", j, i);
	j++;
	printf("%d OR: %5.10x\n", j, i);
	ft_printf("%d MY: %5.10x\n", j, i);
	j++;
	printf("%d OR: %2.3x\n", j, i);
	ft_printf("%d MY: %2.3x\n", j, i);
	j++;
	printf("%d OR: %3.2x\n", j, i);
	ft_printf("%d MY: %3.2x\n", j, i);
	j++;
	printf("%d OR: %3.5x\n", j, 0);
	ft_printf("%d MY: %3.5x\n", j, 0);
	j++;
	printf("%d OR: %5.3x\n", j, 0);
	ft_printf("%d MY: %5.3x\n", j, 0);
	j++;

	printf("%d OR: %05.10x\n", j, i); // width + precision + zero
	ft_printf("%d MY: %05.10x\n", j, i);
	j++;
	printf("%d OR: %010.15x\n", j, i);
	ft_printf("%d MY: %010.15x\n", j, i);
	j++;
	printf("%d OR: %015.10x\n", j, i);
	ft_printf("%d MY: %015.10x\n", j, i);
	j++;
	printf("%d OR: %010.5x\n", j, i);
	ft_printf("%d MY: %010.5x\n", j, i);
	j++;
	printf("%d OR: %05.10x\n", j, i);
	ft_printf("%d MY: %05.10x\n", j, i);
	j++;
	printf("%d OR: %02.3x\n", j, i);
	ft_printf("%d MY: %02.3x\n", j, i);
	j++;
	printf("%d OR: %03.2x\n", j, i);
	ft_printf("%d MY: %03.2x\n", j, i);
	j++;
	printf("%d OR: %03.5x\n", j, 0);
	ft_printf("%d MY: %03.5x\n", j, 0);
	j++;
	printf("%d OR: %05.3x\n", j, 0);
	ft_printf("%d MY: %05.3x\n", j, 0);
	j++;

	printf("%d OR: %#5.10x\n", j, i); // width + precision + hash
	ft_printf("%d MY: %#5.10x\n", j, i);
	j++;
	printf("%d OR: %#10.15x\n", j, i);
	ft_printf("%d MY: %#10.15x\n", j, i);
	j++;
	printf("%d OR: %#15.10x\n", j, i);
	ft_printf("%d MY: %#15.10x\n", j, i);
	j++;
	printf("%d OR: %#10.5x\n", j, i);
	ft_printf("%d MY: %#10.5x\n", j, i);
	j++;
	printf("%d OR: %#5.10x\n", j, i);
	ft_printf("%d MY: %#5.10x\n", j, i);
	j++;
	printf("%d OR: %#2.3x\n", j, i);
	ft_printf("%d MY: %#2.3x\n", j, i);
	j++;
	printf("%d OR: %#3.2x\n", j, i);
	ft_printf("%d MY: %#3.2x\n", j, i);
	j++;
	printf("%d OR: %#3.5x\n", j, 0);
	ft_printf("%d MY: %#3.5x\n", j, 0);
	j++;
	printf("%d OR: %#5.3x\n", j, 0);
	ft_printf("%d MY: %#5.3x\n", j, 0);
	j++;

	printf("%d OR: %-5.10x\n", j, i); // width + precision + minus
	ft_printf("%d MY: %-5.10x\n", j, i);
	j++;
	printf("%d OR: %-10.15x\n", j, i);
	ft_printf("%d MY: %-10.15x\n", j, i);
	j++;
	printf("%d OR: %-15.10x\n", j, i);
	ft_printf("%d MY: %-15.10x\n", j, i);
	j++;
	printf("%d OR: %-10.5x\n", j, i);
	ft_printf("%d MY: %-10.5x\n", j, i);
	j++;
	printf("%d OR: %-5.10x\n", j, i);
	ft_printf("%d MY: %-5.10x\n", j, i);
	j++;
	printf("%d OR: %-2.3x\n", j, i);
	ft_printf("%d MY: %-2.3x\n", j, i);
	j++;
	printf("%d OR: %-3.2x\n", j, i);
	ft_printf("%d MY: %-3.2x\n", j, i);
	j++;
	printf("%d OR: %-3.5x\n", j, 0);
	ft_printf("%d MY: %-3.5x\n", j, 0);
	j++;
	printf("%d OR: %-5.3x\n", j, 0);
	ft_printf("%d MY: %-5.3x\n", j, 0);
	j++;

	printf("%d OR: %#05.10x\n", j, i); // width + precision + hash + zero
	ft_printf("%d MY: %#05.10x\n", j, i);
	j++;
	printf("%d OR: %#010.15x\n", j, i);
	ft_printf("%d MY: %#010.15x\n", j, i);
	j++;
	printf("%d OR: %#015.10x\n", j, i);
	ft_printf("%d MY: %#015.10x\n", j, i);
	j++;
	printf("%d OR: %#010.5x\n", j, i);
	ft_printf("%d MY: %#010.5x\n", j, i);
	j++;
	printf("%d OR: %#05.10x\n", j, i);
	ft_printf("%d MY: %#05.10x\n", j, i);
	j++;
	printf("%d OR: %#02.3x\n", j, i);
	ft_printf("%d MY: %#02.3x\n", j, i);
	j++;
	printf("%d OR: %#03.2x\n", j, i);
	ft_printf("%d MY: %#03.2x\n", j, i);
	j++;
	printf("%d OR: %#03.5x\n", j, 0);
	ft_printf("%d MY: %#03.5x\n", j, 0);
	j++;
	printf("%d OR: %#05.3x\n", j, 0);
	ft_printf("%d MY: %#05.3x\n", j, 0);
	j++;

	printf("%d OR: %-#5.10x\n", j, i); // width + precision + hash + minus
	ft_printf("%d MY: %-#5.10x\n", j, i);
	j++;
	printf("%d OR: %-#10.15x\n", j, i);
	ft_printf("%d MY: %-#10.15x\n", j, i);
	j++;
	printf("%d OR: %-#15.10x\n", j, i);
	ft_printf("%d MY: %-#15.10x\n", j, i);
	j++;
	printf("%d OR: %-#10.5x\n", j, i);
	ft_printf("%d MY: %-#10.5x\n", j, i);
	j++;
	printf("%d OR: %-#5.10x\n", j, i);
	ft_printf("%d MY: %-#5.10x\n", j, i);
	j++;
	printf("%d OR: %-#2.3x\n", j, i);
	ft_printf("%d MY: %-#2.3x\n", j, i);
	j++;
	printf("%d OR: %-#3.2x\n", j, i);
	ft_printf("%d MY: %-#3.2x\n", j, i);
	j++;
	printf("%d OR: %#-3.5x\n", j, 0);
	ft_printf("%d MY: %#-3.5x\n", j, 0);
	j++;
	printf("%d OR: %#-5.3x\n", j, 0);
	ft_printf("%d MY: %#-5.3x\n", j, 0);
	j++;
}

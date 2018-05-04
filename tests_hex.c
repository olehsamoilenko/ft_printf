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

	ft_printf("=============== x ===============\n");

	printf("%d OR: %20x@\n", j, i); // width
	ft_printf("%d FT: %20x@\n", j, i);
	j++;
	printf("%d OR: %5x@\n", j, i);
	ft_printf("%d FT: %5x@\n", j, i);
	j++;
	printf("%d OR: %5x@\n", j, 0);
	ft_printf("%d FT: %5x@\n", j, 0);
	j++;
	printf("%d OR: %.20x@\n", j, i); // precision
	ft_printf("%d FT: %.20x@\n", j, i);
	j++;
	printf("%d OR: %.5x@\n", j, i);
	ft_printf("%d FT: %.5x@\n", j, i);
	j++;
	printf("%d OR: %.5x@\n", j, 0);
	ft_printf("%d FT: %.5x@\n", j, 0);
	j++;
	printf("%d OR: %#x@\n", j, i); // hash
	ft_printf("%d FT: %#x@\n", j, i);
	j++;
	printf("%d OR: %#5x@\n", j, 0);
	ft_printf("%d FT: %#5x@\n", j, 0);
	j++;

	printf("%d OR: %-5x@\n", j, i); // minus + width
	ft_printf("%d FT: %-5x@\n", j, i);
	j++;
	printf("%d OR: %-10x@\n", j, i);
	ft_printf("%d FT: %-10x@\n", j, i);
	j++;
	printf("%d OR: %-5x@\n", j, 0);
	ft_printf("%d FT: %-5x@\n", j, 0);
	j++;
	printf("%d OR: %05x@\n", j, i); // zero + width
	ft_printf("%d FT: %05x@\n", j, i);
	j++;
	printf("%d OR: %020x@\n", j, i);
	ft_printf("%d FT: %020x@\n", j, i);
	j++;
	printf("%d OR: %05x@\n", j, 0);
	ft_printf("%d FT: %05x@\n", j, 0);
	j++;
	printf("%d OR: %0.5x@\n", j, i); // zero + precision
	ft_printf("%d FT: %0.5x@\n", j, i);
	j++;
	printf("%d OR: %0.20x@\n", j, i);
	ft_printf("%d FT: %0.20x@\n", j, i);
	j++;
	printf("%d OR: %0.5x@\n", j, 0);
	ft_printf("%d FT: %0.5x@\n", j, 0);
	j++;

	printf("%d OR: %#20x@\n", j, i); // hash + width
	ft_printf("%d FT: %#20x@\n", j, i);
	j++;
	printf("%d OR: %#5x@\n", j, i);
	ft_printf("%d FT: %#5x@\n", j, i);
	j++;
	printf("%d OR: %#5x@\n", j, 0);
	ft_printf("%d FT: %#5x@\n", j, 0);
	j++;
	printf("%d OR: %#.20x@\n", j, i); // hash + precision
	ft_printf("%d FT: %#.20x@\n", j, i);
	j++;
	printf("%d OR: %#.5x@\n", j, i);
	ft_printf("%d FT: %#.5x@\n", j, i);
	j++;
	printf("%d OR: %#.5x@\n", j, 0);
	ft_printf("%d FT: %#.5x@\n", j, 0);
	j++;

	printf("%d OR: %5.10x@\n", j, i); // width + precision
	ft_printf("%d FT: %5.10x@\n", j, i);
	j++;
	printf("%d OR: %10.15x@\n", j, i);
	ft_printf("%d FT: %10.15x@\n", j, i);
	j++;
	printf("%d OR: %15.10x@\n", j, i);
	ft_printf("%d FT: %15.10x@\n", j, i);
	j++;
	printf("%d OR: %10.5x@\n", j, i);
	ft_printf("%d FT: %10.5x@\n", j, i);
	j++;
	printf("%d OR: %5.10x@\n", j, i);
	ft_printf("%d FT: %5.10x@\n", j, i);
	j++;
	printf("%d OR: %2.3x@\n", j, i);
	ft_printf("%d FT: %2.3x@\n", j, i);
	j++;
	printf("%d OR: %3.2x@\n", j, i);
	ft_printf("%d FT: %3.2x@\n", j, i);
	j++;
	printf("%d OR: %3.5x@\n", j, 0);
	ft_printf("%d FT: %3.5x@\n", j, 0);
	j++;
	printf("%d OR: %5.3x@\n", j, 0);
	ft_printf("%d FT: %5.3x@\n", j, 0);
	j++;

	printf("%d OR: %05.10x@\n", j, i); // width + precision + zero
	ft_printf("%d FT: %05.10x@\n", j, i);
	j++;
	printf("%d OR: %010.15x@\n", j, i);
	ft_printf("%d FT: %010.15x@\n", j, i);
	j++;
	printf("%d OR: %015.10x@\n", j, i);
	ft_printf("%d FT: %015.10x@\n", j, i);
	j++;
	printf("%d OR: %010.5x@\n", j, i);
	ft_printf("%d FT: %010.5x@\n", j, i);
	j++;
	printf("%d OR: %05.10x@\n", j, i);
	ft_printf("%d FT: %05.10x@\n", j, i);
	j++;
	printf("%d OR: %02.3x@\n", j, i);
	ft_printf("%d FT: %02.3x@\n", j, i);
	j++;
	printf("%d OR: %03.2x@\n", j, i);
	ft_printf("%d FT: %03.2x@\n", j, i);
	j++;
	printf("%d OR: %03.5x@\n", j, 0);
	ft_printf("%d FT: %03.5x@\n", j, 0);
	j++;
	printf("%d OR: %05.3x@\n", j, 0);
	ft_printf("%d FT: %05.3x@\n", j, 0);
	j++;

	printf("%d OR: %#5.10x@\n", j, i); // width + precision + hash
	ft_printf("%d FT: %#5.10x@\n", j, i);
	j++;
	printf("%d OR: %#10.15x@\n", j, i);
	ft_printf("%d FT: %#10.15x@\n", j, i);
	j++;
	printf("%d OR: %#15.10x@\n", j, i);
	ft_printf("%d FT: %#15.10x@\n", j, i);
	j++;
	printf("%d OR: %#10.5x@\n", j, i);
	ft_printf("%d FT: %#10.5x@\n", j, i);
	j++;
	printf("%d OR: %#5.10x@\n", j, i);
	ft_printf("%d FT: %#5.10x@\n", j, i);
	j++;
	printf("%d OR: %#2.3x@\n", j, i);
	ft_printf("%d FT: %#2.3x@\n", j, i);
	j++;
	printf("%d OR: %#3.2x@\n", j, i);
	ft_printf("%d FT: %#3.2x@\n", j, i);
	j++;
	printf("%d OR: %#3.5x@\n", j, 0);
	ft_printf("%d FT: %#3.5x@\n", j, 0);
	j++;
	printf("%d OR: %#5.3x@\n", j, 0);
	ft_printf("%d FT: %#5.3x@\n", j, 0);
	j++;

	printf("%d OR: %-5.10x@\n", j, i); // width + precision + minus
	ft_printf("%d FT: %-5.10x@\n", j, i);
	j++;
	printf("%d OR: %-10.15x@\n", j, i);
	ft_printf("%d FT: %-10.15x@\n", j, i);
	j++;
	printf("%d OR: %-15.10x@\n", j, i);
	ft_printf("%d FT: %-15.10x@\n", j, i);
	j++;
	printf("%d OR: %-10.5x@\n", j, i);
	ft_printf("%d FT: %-10.5x@\n", j, i);
	j++;
	printf("%d OR: %-5.10x@\n", j, i);
	ft_printf("%d FT: %-5.10x@\n", j, i);
	j++;
	printf("%d OR: %-2.3x@\n", j, i);
	ft_printf("%d FT: %-2.3x@\n", j, i);
	j++;
	printf("%d OR: %-3.2x@\n", j, i);
	ft_printf("%d FT: %-3.2x@\n", j, i);
	j++;
	printf("%d OR: %-3.5x@\n", j, 0);
	ft_printf("%d FT: %-3.5x@\n", j, 0);
	j++;
	printf("%d OR: %-5.3x@\n", j, 0);
	ft_printf("%d FT: %-5.3x@\n", j, 0);
	j++;

	printf("%d OR: %#05.10x@\n", j, i); // width + precision + hash + zero
	ft_printf("%d FT: %#05.10x@\n", j, i);
	j++;
	printf("%d OR: %#010.15x@\n", j, i);
	ft_printf("%d FT: %#010.15x@\n", j, i);
	j++;
	printf("%d OR: %#015.10x@\n", j, i);
	ft_printf("%d FT: %#015.10x@\n", j, i);
	j++;
	printf("%d OR: %#010.5x@\n", j, i);
	ft_printf("%d FT: %#010.5x@\n", j, i);
	j++;
	printf("%d OR: %#05.10x@\n", j, i);
	ft_printf("%d FT: %#05.10x@\n", j, i);
	j++;
	printf("%d OR: %#02.3x@\n", j, i);
	ft_printf("%d FT: %#02.3x@\n", j, i);
	j++;
	printf("%d OR: %#03.2x@\n", j, i);
	ft_printf("%d FT: %#03.2x@\n", j, i);
	j++;
	printf("%d OR: %#03.5x@\n", j, 0);
	ft_printf("%d FT: %#03.5x@\n", j, 0);
	j++;
	printf("%d OR: %#05.3x@\n", j, 0);
	ft_printf("%d FT: %#05.3x@\n", j, 0);
	j++;

	printf("%d OR: %-#5.10x@\n", j, i); // width + precision + hash + minus
	ft_printf("%d FT: %-#5.10x@\n", j, i);
	j++;
	printf("%d OR: %-#10.15x@\n", j, i);
	ft_printf("%d FT: %-#10.15x@\n", j, i);
	j++;
	printf("%d OR: %-#15.10x@\n", j, i);
	ft_printf("%d FT: %-#15.10x@\n", j, i);
	j++;
	printf("%d OR: %-#10.5x@\n", j, i);
	ft_printf("%d FT: %-#10.5x@\n", j, i);
	j++;
	printf("%d OR: %-#5.10x@\n", j, i);
	ft_printf("%d FT: %-#5.10x@\n", j, i);
	j++;
	printf("%d OR: %-#2.3x@\n", j, i);
	ft_printf("%d FT: %-#2.3x@\n", j, i);
	j++;
	printf("%d OR: %-#3.2x@\n", j, i);
	ft_printf("%d FT: %-#3.2x@\n", j, i);
	j++;
	printf("%d OR: %#-3.5x@\n", j, 0);
	ft_printf("%d FT: %#-3.5x@\n", j, 0);
	j++;
	printf("%d OR: %#-5.3x@\n", j, 0);
	ft_printf("%d FT: %#-5.3x@\n", j, 0);
	j++;

	ft_printf("=============== X ===============\n");

	printf("%d OR: %20X@\n", j, i); // width
	ft_printf("%d FT: %20X@\n", j, i);
	j++;
	printf("%d OR: %5X@\n", j, i);
	ft_printf("%d FT: %5X@\n", j, i);
	j++;
	printf("%d OR: %5X@\n", j, 0);
	ft_printf("%d FT: %5X@\n", j, 0);
	j++;
	printf("%d OR: %.20X@\n", j, i); // precision
	ft_printf("%d FT: %.20X@\n", j, i);
	j++;
	printf("%d OR: %.5X@\n", j, i);
	ft_printf("%d FT: %.5X@\n", j, i);
	j++;
	printf("%d OR: %.5X@\n", j, 0);
	ft_printf("%d FT: %.5X@\n", j, 0);
	j++;
	printf("%d OR: %#X@\n", j, i); // hash
	ft_printf("%d FT: %#X@\n", j, i);
	j++;
	printf("%d OR: %#5X@\n", j, 0);
	ft_printf("%d FT: %#5X@\n", j, 0);
	j++;

	printf("%d OR: %-5X@\n", j, i); // minus + width
	ft_printf("%d FT: %-5X@\n", j, i);
	j++;
	printf("%d OR: %-10X@\n", j, i);
	ft_printf("%d FT: %-10X@\n", j, i);
	j++;
	printf("%d OR: %-5X@\n", j, 0);
	ft_printf("%d FT: %-5X@\n", j, 0);
	j++;
	printf("%d OR: %05X@\n", j, i); // zero + width
	ft_printf("%d FT: %05X@\n", j, i);
	j++;
	printf("%d OR: %020X@\n", j, i);
	ft_printf("%d FT: %020X@\n", j, i);
	j++;
	printf("%d OR: %05X@\n", j, 0);
	ft_printf("%d FT: %05X@\n", j, 0);
	j++;
	printf("%d OR: %0.5X@\n", j, i); // zero + precision
	ft_printf("%d FT: %0.5X@\n", j, i);
	j++;
	printf("%d OR: %0.20X@\n", j, i);
	ft_printf("%d FT: %0.20X@\n", j, i);
	j++;
	printf("%d OR: %0.5X@\n", j, 0);
	ft_printf("%d FT: %0.5X@\n", j, 0);
	j++;

	printf("%d OR: %#20X@\n", j, i); // hash + width
	ft_printf("%d FT: %#20X@\n", j, i);
	j++;
	printf("%d OR: %#5X@\n", j, i);
	ft_printf("%d FT: %#5X@\n", j, i);
	j++;
	printf("%d OR: %#5X@\n", j, 0);
	ft_printf("%d FT: %#5X@\n", j, 0);
	j++;
	printf("%d OR: %#.20X@\n", j, i); // hash + precision
	ft_printf("%d FT: %#.20X@\n", j, i);
	j++;
	printf("%d OR: %#.5X@\n", j, i);
	ft_printf("%d FT: %#.5X@\n", j, i);
	j++;
	printf("%d OR: %#.5X@\n", j, 0);
	ft_printf("%d FT: %#.5X@\n", j, 0);
	j++;

	printf("%d OR: %5.10X@\n", j, i); // width + precision
	ft_printf("%d FT: %5.10X@\n", j, i);
	j++;
	printf("%d OR: %10.15X@\n", j, i);
	ft_printf("%d FT: %10.15X@\n", j, i);
	j++;
	printf("%d OR: %15.10X@\n", j, i);
	ft_printf("%d FT: %15.10X@\n", j, i);
	j++;
	printf("%d OR: %10.5X@\n", j, i);
	ft_printf("%d FT: %10.5X@\n", j, i);
	j++;
	printf("%d OR: %5.10X@\n", j, i);
	ft_printf("%d FT: %5.10X@\n", j, i);
	j++;
	printf("%d OR: %2.3X@\n", j, i);
	ft_printf("%d FT: %2.3X@\n", j, i);
	j++;
	printf("%d OR: %3.2X@\n", j, i);
	ft_printf("%d FT: %3.2X@\n", j, i);
	j++;
	printf("%d OR: %3.5X@\n", j, 0);
	ft_printf("%d FT: %3.5X@\n", j, 0);
	j++;
	printf("%d OR: %5.3X@\n", j, 0);
	ft_printf("%d FT: %5.3X@\n", j, 0);
	j++;

	printf("%d OR: %05.10X@\n", j, i); // width + precision + zero
	ft_printf("%d FT: %05.10X@\n", j, i);
	j++;
	printf("%d OR: %010.15X@\n", j, i);
	ft_printf("%d FT: %010.15X@\n", j, i);
	j++;
	printf("%d OR: %015.10X@\n", j, i);
	ft_printf("%d FT: %015.10X@\n", j, i);
	j++;
	printf("%d OR: %010.5X@\n", j, i);
	ft_printf("%d FT: %010.5X@\n", j, i);
	j++;
	printf("%d OR: %05.10X@\n", j, i);
	ft_printf("%d FT: %05.10X@\n", j, i);
	j++;
	printf("%d OR: %02.3X@\n", j, i);
	ft_printf("%d FT: %02.3X@\n", j, i);
	j++;
	printf("%d OR: %03.2X@\n", j, i);
	ft_printf("%d FT: %03.2X@\n", j, i);
	j++;
	printf("%d OR: %03.5X@\n", j, 0);
	ft_printf("%d FT: %03.5X@\n", j, 0);
	j++;
	printf("%d OR: %05.3X@\n", j, 0);
	ft_printf("%d FT: %05.3X@\n", j, 0);
	j++;

	printf("%d OR: %#5.10X@\n", j, i); // width + precision + hash
	ft_printf("%d FT: %#5.10X@\n", j, i);
	j++;
	printf("%d OR: %#10.15X@\n", j, i);
	ft_printf("%d FT: %#10.15X@\n", j, i);
	j++;
	printf("%d OR: %#15.10X@\n", j, i);
	ft_printf("%d FT: %#15.10X@\n", j, i);
	j++;
	printf("%d OR: %#10.5X@\n", j, i);
	ft_printf("%d FT: %#10.5X@\n", j, i);
	j++;
	printf("%d OR: %#5.10X@\n", j, i);
	ft_printf("%d FT: %#5.10X@\n", j, i);
	j++;
	printf("%d OR: %#2.3X@\n", j, i);
	ft_printf("%d FT: %#2.3X@\n", j, i);
	j++;
	printf("%d OR: %#3.2X@\n", j, i);
	ft_printf("%d FT: %#3.2X@\n", j, i);
	j++;
	printf("%d OR: %#3.5X@\n", j, 0);
	ft_printf("%d FT: %#3.5X@\n", j, 0);
	j++;
	printf("%d OR: %#5.3X@\n", j, 0);
	ft_printf("%d FT: %#5.3X@\n", j, 0);
	j++;

	printf("%d OR: %-5.10X@\n", j, i); // width + precision + minus
	ft_printf("%d FT: %-5.10X@\n", j, i);
	j++;
	printf("%d OR: %-10.15X@\n", j, i);
	ft_printf("%d FT: %-10.15X@\n", j, i);
	j++;
	printf("%d OR: %-15.10X@\n", j, i);
	ft_printf("%d FT: %-15.10X@\n", j, i);
	j++;
	printf("%d OR: %-10.5X@\n", j, i);
	ft_printf("%d FT: %-10.5X@\n", j, i);
	j++;
	printf("%d OR: %-5.10X@\n", j, i);
	ft_printf("%d FT: %-5.10X@\n", j, i);
	j++;
	printf("%d OR: %-2.3X@\n", j, i);
	ft_printf("%d FT: %-2.3X@\n", j, i);
	j++;
	printf("%d OR: %-3.2X@\n", j, i);
	ft_printf("%d FT: %-3.2X@\n", j, i);
	j++;
	printf("%d OR: %-3.5X@\n", j, 0);
	ft_printf("%d FT: %-3.5X@\n", j, 0);
	j++;
	printf("%d OR: %-5.3X@\n", j, 0);
	ft_printf("%d FT: %-5.3X@\n", j, 0);
	j++;

	printf("%d OR: %#05.10X@\n", j, i); // width + precision + hash + zero
	ft_printf("%d FT: %#05.10X@\n", j, i);
	j++;
	printf("%d OR: %#010.15X@\n", j, i);
	ft_printf("%d FT: %#010.15X@\n", j, i);
	j++;
	printf("%d OR: %#015.10X@\n", j, i);
	ft_printf("%d FT: %#015.10X@\n", j, i);
	j++;
	printf("%d OR: %#010.5X@\n", j, i);
	ft_printf("%d FT: %#010.5X@\n", j, i);
	j++;
	printf("%d OR: %#05.10X@\n", j, i);
	ft_printf("%d FT: %#05.10X@\n", j, i);
	j++;
	printf("%d OR: %#02.3X@\n", j, i);
	ft_printf("%d FT: %#02.3X@\n", j, i);
	j++;
	printf("%d OR: %#03.2X@\n", j, i);
	ft_printf("%d FT: %#03.2X@\n", j, i);
	j++;
	printf("%d OR: %#03.5X@\n", j, 0);
	ft_printf("%d FT: %#03.5X@\n", j, 0);
	j++;
	printf("%d OR: %#05.3X@\n", j, 0);
	ft_printf("%d FT: %#05.3X@\n", j, 0);
	j++;

	printf("%d OR: %-#5.10X@\n", j, i); // width + precision + hash + minus
	ft_printf("%d FT: %-#5.10X@\n", j, i);
	j++;
	printf("%d OR: %-#10.15X@\n", j, i);
	ft_printf("%d FT: %-#10.15X@\n", j, i);
	j++;
	printf("%d OR: %-#15.10X@\n", j, i);
	ft_printf("%d FT: %-#15.10X@\n", j, i);
	j++;
	printf("%d OR: %-#10.5X@\n", j, i);
	ft_printf("%d FT: %-#10.5X@\n", j, i);
	j++;
	printf("%d OR: %-#5.10X@\n", j, i);
	ft_printf("%d FT: %-#5.10X@\n", j, i);
	j++;
	printf("%d OR: %-#2.3X@\n", j, i);
	ft_printf("%d FT: %-#2.3X@\n", j, i);
	j++;
	printf("%d OR: %-#3.2X@\n", j, i);
	ft_printf("%d FT: %-#3.2X@\n", j, i);
	j++;
	printf("%d OR: %#-3.5X@\n", j, 0);
	ft_printf("%d FT: %#-3.5X@\n", j, 0);
	j++;
	printf("%d OR: %#-5.3X@\n", j, 0);
	ft_printf("%d FT: %#-5.3X@\n", j, 0);
	j++;
}

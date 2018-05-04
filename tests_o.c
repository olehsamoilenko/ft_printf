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

	ft_printf("=============== o ===============\n");

	printf("%d OR: %20o@\n", j, i); // width
	ft_printf("%d FT: %20o@\n", j, i);
	j++;
	printf("%d OR: %5o@\n", j, i);
	ft_printf("%d FT: %5o@\n", j, i);
	j++;
	printf("%d OR: %5o@\n", j, 0);
	ft_printf("%d FT: %5o@\n", j, 0);
	j++;
	printf("%d OR: %.20o@\n", j, i); // precision
	ft_printf("%d FT: %.20o@\n", j, i);
	j++;
	printf("%d OR: %.5o@\n", j, i);
	ft_printf("%d FT: %.5o@\n", j, i);
	j++;
	printf("%d OR: %.5o@\n", j, 0);
	ft_printf("%d FT: %.5o@\n", j, 0);
	j++;
	printf("%d OR: %#o@\n", j, i); // hash
	ft_printf("%d FT: %#o@\n", j, i);
	j++;
	printf("%d OR: %#5o@\n", j, 0);
	ft_printf("%d FT: %#5o@\n", j, 0);
	j++;

	printf("%d OR: %-5o@\n", j, i); // minus + width
	ft_printf("%d FT: %-5o@\n", j, i);
	j++;
	printf("%d OR: %-10o@\n", j, i);
	ft_printf("%d FT: %-10o@\n", j, i);
	j++;
	printf("%d OR: %-5o@\n", j, 0);
	ft_printf("%d FT: %-5o@\n", j, 0);
	j++;
	printf("%d OR: %05o@\n", j, i); // zero + width
	ft_printf("%d FT: %05o@\n", j, i);
	j++;
	printf("%d OR: %020o@\n", j, i);
	ft_printf("%d FT: %020o@\n", j, i);
	j++;
	printf("%d OR: %05o@\n", j, 0);
	ft_printf("%d FT: %05o@\n", j, 0);
	j++;
	printf("%d OR: %0.5o@\n", j, i); // zero + precision
	ft_printf("%d FT: %0.5o@\n", j, i);
	j++;
	printf("%d OR: %0.20o@\n", j, i);
	ft_printf("%d FT: %0.20o@\n", j, i);
	j++;
	printf("%d OR: %0.5o@\n", j, 0);
	ft_printf("%d FT: %0.5o@\n", j, 0);
	j++;

	printf("%d OR: %#20o@\n", j, i); // hash + width
	ft_printf("%d FT: %#20o@\n", j, i);
	j++;
	printf("%d OR: %#5o@\n", j, i);
	ft_printf("%d FT: %#5o@\n", j, i);
	j++;
	printf("%d OR: %#5o@\n", j, 0);
	ft_printf("%d FT: %#5o@\n", j, 0);
	j++;
	printf("%d OR: %#.20o@\n", j, i); // hash + precision
	ft_printf("%d FT: %#.20o@\n", j, i);
	j++;
	printf("%d OR: %#.5o@\n", j, i);
	ft_printf("%d FT: %#.5o@\n", j, i);
	j++;
	printf("%d OR: %#.5o@\n", j, 0);
	ft_printf("%d FT: %#.5o@\n", j, 0);
	j++;

	printf("%d OR: %5.10o@\n", j, i); // width + precision
	ft_printf("%d FT: %5.10o@\n", j, i);
	j++;
	printf("%d OR: %10.15o@\n", j, i);
	ft_printf("%d FT: %10.15o@\n", j, i);
	j++;
	printf("%d OR: %15.10o@\n", j, i);
	ft_printf("%d FT: %15.10o@\n", j, i);
	j++;
	printf("%d OR: %10.5o@\n", j, i);
	ft_printf("%d FT: %10.5o@\n", j, i);
	j++;
	printf("%d OR: %5.10o@\n", j, i);
	ft_printf("%d FT: %5.10o@\n", j, i);
	j++;
	printf("%d OR: %2.3o@\n", j, i);
	ft_printf("%d FT: %2.3o@\n", j, i);
	j++;
	printf("%d OR: %3.2o@\n", j, i);
	ft_printf("%d FT: %3.2o@\n", j, i);
	j++;
	printf("%d OR: %3.5o@\n", j, 0);
	ft_printf("%d FT: %3.5o@\n", j, 0);
	j++;
	printf("%d OR: %5.3o@\n", j, 0);
	ft_printf("%d FT: %5.3o@\n", j, 0);
	j++;

	printf("%d OR: %05.10o@\n", j, i); // width + precision + zero
	ft_printf("%d FT: %05.10o@\n", j, i);
	j++;
	printf("%d OR: %010.15o@\n", j, i);
	ft_printf("%d FT: %010.15o@\n", j, i);
	j++;
	printf("%d OR: %015.10o@\n", j, i);
	ft_printf("%d FT: %015.10o@\n", j, i);
	j++;
	printf("%d OR: %010.5o@\n", j, i);
	ft_printf("%d FT: %010.5o@\n", j, i);
	j++;
	printf("%d OR: %05.10o@\n", j, i);
	ft_printf("%d FT: %05.10o@\n", j, i);
	j++;
	printf("%d OR: %02.3o@\n", j, i);
	ft_printf("%d FT: %02.3o@\n", j, i);
	j++;
	printf("%d OR: %03.2o@\n", j, i);
	ft_printf("%d FT: %03.2o@\n", j, i);
	j++;
	printf("%d OR: %03.5o@\n", j, 0);
	ft_printf("%d FT: %03.5o@\n", j, 0);
	j++;
	printf("%d OR: %05.3o@\n", j, 0);
	ft_printf("%d FT: %05.3o@\n", j, 0);
	j++;

	printf("%d OR: %#5.10o@\n", j, i); // width + precision + hash
	ft_printf("%d FT: %#5.10o@\n", j, i);
	j++;
	printf("%d OR: %#10.15o@\n", j, i);
	ft_printf("%d FT: %#10.15o@\n", j, i);
	j++;
	printf("%d OR: %#15.10o@\n", j, i);
	ft_printf("%d FT: %#15.10o@\n", j, i);
	j++;
	printf("%d OR: %#10.5o@\n", j, i);
	ft_printf("%d FT: %#10.5o@\n", j, i);
	j++;
	printf("%d OR: %#5.10o@\n", j, i);
	ft_printf("%d FT: %#5.10o@\n", j, i);
	j++;
	printf("%d OR: %#2.3o@\n", j, i);
	ft_printf("%d FT: %#2.3o@\n", j, i);
	j++;
	printf("%d OR: %#3.2o@\n", j, i);
	ft_printf("%d FT: %#3.2o@\n", j, i);
	j++;
	printf("%d OR: %#3.5o@\n", j, 0);
	ft_printf("%d FT: %#3.5o@\n", j, 0);
	j++;
	printf("%d OR: %#5.3o@\n", j, 0);
	ft_printf("%d FT: %#5.3o@\n", j, 0);
	j++;

	printf("%d OR: %-5.10o@\n", j, i); // width + precision + minus
	ft_printf("%d FT: %-5.10o@\n", j, i);
	j++;
	printf("%d OR: %-10.15o@\n", j, i);
	ft_printf("%d FT: %-10.15o@\n", j, i);
	j++;
	printf("%d OR: %-15.10o@\n", j, i);
	ft_printf("%d FT: %-15.10o@\n", j, i);
	j++;
	printf("%d OR: %-10.5o@\n", j, i);
	ft_printf("%d FT: %-10.5o@\n", j, i);
	j++;
	printf("%d OR: %-5.10o@\n", j, i);
	ft_printf("%d FT: %-5.10o@\n", j, i);
	j++;
	printf("%d OR: %-2.3o@\n", j, i);
	ft_printf("%d FT: %-2.3o@\n", j, i);
	j++;
	printf("%d OR: %-3.2o@\n", j, i);
	ft_printf("%d FT: %-3.2o@\n", j, i);
	j++;
	printf("%d OR: %-3.5o@\n", j, 0);
	ft_printf("%d FT: %-3.5o@\n", j, 0);
	j++;
	printf("%d OR: %-5.3o@\n", j, 0);
	ft_printf("%d FT: %-5.3o@\n", j, 0);
	j++;

	printf("%d OR: %#05.10o@\n", j, i); // width + precision + hash + zero
	ft_printf("%d FT: %#05.10o@\n", j, i);
	j++;
	printf("%d OR: %#010.15o@\n", j, i);
	ft_printf("%d FT: %#010.15o@\n", j, i);
	j++;
	printf("%d OR: %#015.10o@\n", j, i);
	ft_printf("%d FT: %#015.10o@\n", j, i);
	j++;
	printf("%d OR: %#010.5o@\n", j, i);
	ft_printf("%d FT: %#010.5o@\n", j, i);
	j++;
	printf("%d OR: %#05.10o@\n", j, i);
	ft_printf("%d FT: %#05.10o@\n", j, i);
	j++;
	printf("%d OR: %#02.3o@\n", j, i);
	ft_printf("%d FT: %#02.3o@\n", j, i);
	j++;
	printf("%d OR: %#03.2o@\n", j, i);
	ft_printf("%d FT: %#03.2o@\n", j, i);
	j++;
	printf("%d OR: %#03.5o@\n", j, 0);
	ft_printf("%d FT: %#03.5o@\n", j, 0);
	j++;
	printf("%d OR: %#05.3o@\n", j, 0);
	ft_printf("%d FT: %#05.3o@\n", j, 0);
	j++;

	printf("%d OR: %-#5.10o@\n", j, i); // width + precision + hash + minus
	ft_printf("%d FT: %-#5.10o@\n", j, i);
	j++;
	printf("%d OR: %-#10.15o@\n", j, i);
	ft_printf("%d FT: %-#10.15o@\n", j, i);
	j++;
	printf("%d OR: %-#15.10o@\n", j, i);
	ft_printf("%d FT: %-#15.10o@\n", j, i);
	j++;
	printf("%d OR: %-#10.5o@\n", j, i);
	ft_printf("%d FT: %-#10.5o@\n", j, i);
	j++;
	printf("%d OR: %-#5.10o@\n", j, i);
	ft_printf("%d FT: %-#5.10o@\n", j, i);
	j++;
	printf("%d OR: %-#2.3o@\n", j, i);
	ft_printf("%d FT: %-#2.3o@\n", j, i);
	j++;
	printf("%d OR: %-#3.2o@\n", j, i);
	ft_printf("%d FT: %-#3.2o@\n", j, i);
	j++;
	printf("%d OR: %#-3.5o@\n", j, 0);
	ft_printf("%d FT: %#-3.5o@\n", j, 0);
	j++;
	printf("%d OR: %#-5.3o@\n", j, 0);
	ft_printf("%d FT: %#-5.3o@\n", j, 0);
	j++;

	// ft_printf("%o@\n", -i); // undefined behaviour
	// ft_printf("%20o@\n", -i);
	// ft_printf("%.20o@\n", -i);
	// ft_printf("%#o@\n", -i);
	// ft_printf("%-20o@\n", -i);
	// ft_printf("%020o@\n", -i);
	// ft_printf("%0.20o@\n", -i);
	// ft_printf("%#20o@\n", -i);
	// ft_printf("%#.20o@\n", -i);
	// ft_printf("%010.20o@\n", -i);
	// ft_printf("%#10.20o@\n", -i);
	// ft_printf("%-10.20o@\n", -i);
	// ft_printf("%#010.20o@\n", -i);
	// ft_printf("%#-10.20o@\n", -i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 13:32:43 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/03 13:32:59 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
{
	// tests_o();
	// tests_hex();
	// tests_integer();
	// tests_s();
	// tests_c();
	int i = 200;
	int value;
	int j = 0;;
	// printf("%d %D %O %U\n", i, i, i);
	// printf("%d %#D %#O %#U\n", i, i, i);
	// printf("%d % D % O % U\n", i, i, i);
	// printf("%d %+D %+O %+U\n", i, i, i);
	// printf("%d %-D %-O %-U\n", i, i, i);
	// printf("%d %0D %0O %0U\n", i, i, i);

	// ft_printf("--------------- %% ---------------\n");
	// value = printf("%d %.5%@", j); printf(" VALUE: %d\n", value);
	// value = ft_printf("%d %.5%@", j); printf(" VALUE: %d\n", value);
	// j++;
	// value = printf("%d %#10.5%@", j); printf(" VALUE: %d\n", value);
	// value = ft_printf("%d %#10.5%@", j); printf(" VALUE: %d\n", value);
	// j++;
	// value = printf("%d %010.5%@", j); printf(" VALUE: %d\n", value);
	// value = ft_printf("%d %010.5%@", j); printf(" VALUE: %d\n", value);
	// j++;
	// value = printf("%d %-10.5%@", j); printf(" VALUE: %d\n", value);
	// value = ft_printf("%d %-10.5%@", j); printf(" VALUE: %d\n", value);
	// j++;
	// value = printf("%d %+10.5%@", j); printf(" VALUE: %d\n", value);
	// value = ft_printf("%d %+10.5%@", j); printf(" VALUE: %d\n", value);
	// j++;
	// value = printf("%d % 10.5%@", j); printf(" VALUE: %d\n", value);
	// value = ft_printf("%d % 10.5%@", j); printf(" VALUE: %d\n", value);
	// j++;

	   printf("%lld\n", -9223372036854775808);
	ft_printf("%lld\n", -9223372036854775808);
	// ft_printf("%x", -42);
	// ft_printf("%u\n", -1);

	// printf("%d %-.12#034+qq q\n", 123);
	return (0);

}

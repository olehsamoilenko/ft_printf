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
#include <locale.h>

int	main(void)
{
	// tests_o();
	// tests_hex();
	// tests_integer();
	// tests_s();
	// tests_c();
	int i = 200;
	int value;
	int j = 0;
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

	//    printf("or: %lu\n", -42);
	// ft_printf("my: %lu\n", -42);

	//    printf("or: %lu\n", -42);
	// ft_printf("my: %lu\n", -42);
	char* l = setlocale(LC_ALL, "");
	ft_printf("%C\n", 24000);
	   printf("%C\n", 24000);

	//    printf("or: %hU\n", -42);
	// ft_printf("my: %hU\n", -42);

	//    printf("or: %hhU\n", 42949672961);
	// ft_printf("my: %hhU\n", 42949672961);

	//    printf("or: %lU\n", 4294967296);
	// ft_printf("my: %lU\n", 4294967296);

	//    printf("or: %llU\n", 4294967296);
	// ft_printf("my: %llU\n", 4294967296);
	
	//    printf("or: %jU\n", 4294967296);
	// ft_printf("my: %jU\n", 4294967296);
	
	//    printf("or: %zU\n", 4294967296);
	// ft_printf("my: %zU\n", 4294967296);
	// ft_printf("%x", -42);
	// ft_printf("%u\n", -1);

		
	// printf("%");
	// printf("%abc");


	// printf("%d %-.12#034+qq q\n", 123);
	return (0);

}

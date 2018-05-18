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
	char* l = setlocale(LC_ALL, "");

	int i;
	int res;
	// unsigned long l;
	// char *str;
	//    printf("%p\n", &i);
	// ft_printf("%s\n", "abc");
	//    printf("%p\n", &l);
	// ft_printf("%p\n", &l);
	//    printf("%p\n", &str);
	// ft_printf("%p\n", &str);
	//    printf("%p\n", 0);
	// ft_printf("%p\n", 0);

	// char *s = 0;
	// int res = printf("%S\n", s);

	//    printf("or: %ls, %ls\n", L"ÊM-^ZM-^VÁM-^BM-^I", L"ŸM-^Dÿ≠ŸM-^E ÿÆŸM-^Fÿ≤ŸM-ÿ±");
	// ft_printf("my: %ls, %ls\n", L"ÊM-^ZM-^VÁM-^BM-^I", L"ŸM-^Dÿ≠ŸM-^E ÿÆŸM-^Fÿ≤ŸM-ÿ±");

	// res = ft_printf("{%10R}\n"); printf("res: %d\n", res);
	// res =    printf("{%10R}\n"); printf("res: %d\n", res);

	res =    printf("%");
	res = ft_printf("%");

	// res =    printf("%#.o", 0); printf("res: %d\n", res);
	// res = ft_printf("%#.o", 0); printf("res: %d\n", res);

	//    printf("or: %S\n", L"米");
	// ft_printf("my: %S\n", L"米");
	//    printf("or: %s\n", "aaabc");
	// ft_printf("my: %s\n", "aaabc");

	return (0);

}

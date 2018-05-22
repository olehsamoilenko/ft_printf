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
	// char* l = setlocale(LC_ALL, "");

	// int i;
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

	// int *str = L"我是一只猫。";

	// i = -1;
	// while (str[++i])
	// 	printf("%d\n", str[i]);
		// ft_printf("%C\n", str[i]);
		// printf("%d\n", str[i]);

	// res =    printf("%5.2s is a string", "this"); printf(" res: %d\n", res);
	// res = ft_printf("%5.2s is a string", "this"); printf(" res: %d\n", res);

	// res =    printf("%10s is a string", "this"); printf(" res: %d\n", res);
	// res = ft_printf("%10s is a string", "this"); printf(" res: %d\n", res);

	// res =    printf("{%05.s}", "42 c est cool"); printf(" res: %d\n", res);
	// res = ft_printf("{%05.s}", "42 c est cool"); printf(" res: %d\n", res);

	// res =    printf("%"); printf(" res: %d\n", res);

	res =    printf("%0#.3-10x\n", 300); //printf(" res: %d\n", res);
	res = ft_printf("%0#.3-10x\n", 300); //printf(" res: %d\n", res);

	// res =    printf("%zd\n", 4294967296); //printf(" res: %d\n", res);
	// res = ft_printf("%zd\n", 4294967296); //printf(" res: %d\n", res);

	// res =    printf("%hd\n", 4294967296); //printf(" res: %d\n", res);
	// res = ft_printf("%hd\n", 4294967296); //printf(" res: %d\n", res);
	
	// res =    printf("%zhd\n", 4294967296); //printf(" res: %d\n", res);
	// res = ft_printf("%zhd\n", 4294967296); //printf(" res: %d\n", res);

	// res =    printf("%c", 200); printf(" res: %d\n", res);
	// res = ft_printf("%c", 200); printf(" res: %d\n", res);

	// res =    printf("%lc, %lc", L'ÊM-^ZM-^V', L'ÿ≠'); printf(" res: %d\n", res);
	// res = ft_printf("%lc, %lc", L'ÊM-^ZM-^V', L'ÿ≠'); printf(" res: %d\n", res);

	// res =    printf("or: {%05.S}", str); printf(" res: %d\n", res);
	// res = ft_printf("my: {%05.S}", str); printf(" res: %d\n", res);
	// i = -1;
	// while (str[++i])
	// 	ft_putchar(str[i]);
	// res =    printf("%#.o", 0); printf("res: %d\n", res);
	// res = ft_printf("%#.o", 0); printf("res: %d\n", res);

	//    printf("or: %S\n", L"米");
	// ft_printf("my: %S\n", L"米");
	//    printf("or: %s\n", "aaabc");
	// ft_printf("my: %s\n", "aaabc");

	return (0);

}

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
	char* l = setlocale(LC_ALL, "en_US.UTF-8");

	int res;

	// res =    printf("%y", 123); printf(" res: %d\n", res);
	// res = ft_printf("%y", 123); printf(" res: %d\n", res);

	// res =    printf("%S", L"我是一只猫。"); printf(" res: %d\n", res);
	// res = ft_printf("%S", L"我是一只猫。"); printf(" res: %d\n", res);
	
	// res =    printf("|%0+20.S|", L"我是一只猫。"); printf(" res: %d\n", res);
	// res = ft_printf("|%0+20.S|", L"我是一只猫。"); printf(" res: %d\n", res);




	// res =    printf("{%05.s}", "42 c est cool"); printf(" res: %d\n", res);
	// res = ft_printf("{%05.s}", "42 c est cool"); printf(" res: %d\n", res);
	// system("leaks a.out");

	return (0);

}

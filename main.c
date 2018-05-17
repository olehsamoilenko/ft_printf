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

	int i;
	unsigned long l;
	char *str;


	ft_printf("%p\n", &i);
	   printf("%p\n", &l);
	ft_printf("%p\n", &l);
	   printf("%p\n", &str);
	ft_printf("%p\n", &str);
	   printf("%p\n", 0);
	ft_printf("%p\n", 0);

	return (0);

}

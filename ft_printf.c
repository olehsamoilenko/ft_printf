/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 14:05:44 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/01 14:05:48 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	flag_s(va_list argptr)
{
	char *str;

	str = va_arg(argptr, char*);
	ft_putstr(str);
}

void	flag_integer(va_list argptr)
{
	int nbr;

	nbr = va_arg(argptr, int);
	ft_putnbr(nbr);
}

void	flag_persent(va_list argptr)
{
	ft_putchar('%');
}

void	flag_x(va_list argptr)
{
	int nbr;

	nbr = va_arg(argptr, int);
	ft_putstr(itoa_base(nbr, 16, 0));
}

void	flag_o(va_list argptr)
{
	int nbr;

	nbr = va_arg(argptr, int);
	ft_putstr(itoa_base(nbr, 8, 0));
}

void	flag_X(va_list argptr)
{
	int nbr;

	nbr = va_arg(argptr, int);
	ft_putstr(itoa_base(nbr, 16, 1));
}

void	flag_unsigned(va_list argptr)
{
	unsigned int nbr;

	nbr = va_arg(argptr, unsigned int);
	ft_putstr(itoa_base(nbr, 8, 0));
}

void	test(int a)
{
	ft_putnbr(a);
}

// void	flag(int a, *f(int)) // problem !!!
// {
// 	// f(a);
// }



int	ft_printf(const char *format, ...)
{
	va_list	argptr;
	int		i;
	int		nbr;

	va_start(argptr, format); /* the last defined variable as parameter */
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 's')
				flag_s(argptr);
			else if (format[i + 1] == 'd' || 
				format[i + 1] == 'i')
				flag_integer(argptr);
			else if (format[i + 1] == 'o')
				flag_o(argptr);
			else if (format[i + 1] == 'D' ||
				format[i + 1] == 'O' ||
				format[i + 1] == 'U')
				flag_unsigned(argptr);
			else if (format[i + 1] == 'x')
				flag_x(argptr);
			else if (format[i + 1] == 'X')
				flag_X(argptr);
			else if (format[i + 1] == '%')
				flag_persent(argptr);
			else
			{
				ft_putstr("error\n");
				// flag(7, &test);
				return (7);
			}
			i++;
		}
		else
			ft_putchar(format[i]);
	}
	return (0);
}

int	main(void)
{
	int i = 46347843;
	printf("%20i\n", i);
	// ft_printf("%U\n", i);
	// ft_printf("%X\n", i);
	// printf("%s\n", itoa_base(i, 16, 0));
	// ft_printf("%s\n%d\n%i\n%o\n%q", "one", 2, 300, 9, 7);
	// printf("ORIGINAL: %0*.*f\n", 8, 4, 2.5);
	// printf("ORIGINAL: %08.4f\n", 2.5);
	// printf("ORIGINAL: %-20s\n", "a");
	// printf("%b\n", 255);
}

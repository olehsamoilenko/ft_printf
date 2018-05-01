#include <stdarg.h>
#include <unistd.h>

#include <stdio.h> //trash

#include "libft/libft.h" //problem
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

void	test(int a)
{
	ft_putnbr(a);
}

// void	flag(int a, *f(int)) // problem !!!
// {
// 	// f(a);
// }

int	ft_printf(const char *format, ...)
// int ft_printf(int num, ...)
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
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				flag_integer(argptr);
			else if (format[i + 1] == 'o')
				flag_o(argptr);
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

	ft_printf("%s\n%d\n%i\n%o\n%q", "one", 2, 300, 9, 7);
	printf("ORIGINAL: %o\n", -2);
	// printf("%b\n", 255);
}

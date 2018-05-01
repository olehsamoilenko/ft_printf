#include "libft/libft.h"
#include <stdarg.h>

static void	fill_and_put(int n, char *buf)
{
	int i;

	i = 0;
	while (n > 0)
	{
		buf[i] = n % 8 + '0';
		n /= 8;
		i++;
	}
	while (--i >= 0)
		ft_putchar(buf[i]);
}

void		flag_o(va_list argptr)
{
	char	buf[10000];
	int		i;
	int		n;

	// i = 0;
	// n = va_arg(argptr, int);
	// if (n == -2147483648)
	// {
	// 	ft_putnbr(-214748364);
	// 	ft_putnbr(8);
	// 	return ;
	// }
	// if (n < 0)
	// {
	// 	ft_putchar('-');
	// 	ft_putnbr(-n);
	// }
	// if (n == 0)
	// {
	// 	ft_putchar('0');
	// 	return ;
	// }
	fill_and_put(n, buf);
}


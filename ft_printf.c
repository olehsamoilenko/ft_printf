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

typedef struct 	s_pattern
{
	int hash;
	int minus;
	int plus;
	int space;
	int zero;
	int width;
	int precision;
	char type;
}				t_pattern;

t_pattern new_value(void)
{
	t_pattern tmp;

	tmp.hash = 0;
	tmp.minus = 0;
	tmp.plus = 0;
	tmp.space = 0;
	tmp.zero = 0;
	tmp.width = 0;
	tmp.precision = 0;
	tmp.type = 0;
	return (tmp);
}

void	flag_c(va_list argptr, t_pattern tmp)
{
	int	c;

	c = va_arg(argptr, int);
	ft_putchar(c);
}

void	flag_s(va_list argptr, t_pattern tmp)
{
	char *str;

	str = va_arg(argptr, char*);
	ft_putstr(str);
}

void	flag_integer(va_list argptr, t_pattern tmp)
{
	int nbr;

	nbr = va_arg(argptr, int);
	ft_putnbr(nbr);
}

void	flag_persent(va_list argptr, t_pattern tmp)
{
	ft_putchar('%');
}

void	flag_x(va_list argptr, t_pattern tmp)
{
	int nbr;

	nbr = va_arg(argptr, int);
	ft_putstr(itoa_base(nbr, 16, 0));
}

void	flag_o(va_list argptr, t_pattern tmp)
{
	int nbr;
	char *str;
	int len;

	nbr = va_arg(argptr, int);
	str = itoa_base(nbr, 8, 0);
	len = ft_strlen(str);
	len = tmp.width - len;
	if (tmp.minus == 1)
	{
		ft_putstr(str);
		while (len-- > 0)
			ft_putchar(' ');
	}
	else
	{
		while (len-- > 0)
			ft_putchar(' ');
		ft_putstr(str);
	}
}

void	flag_X(va_list argptr, t_pattern tmp)
{
	int nbr;

	nbr = va_arg(argptr, int);
	ft_putstr(itoa_base(nbr, 16, 1));
}

void	flag_unsigned(va_list argptr, t_pattern tmp)
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

int is_type(char c)
{
	if (c == 's' || c == 'S' || c == 'p' || c == 'd' ||
		c == 'D' || c == 'i' || c == 'o' || c == 'O' ||
		c == 'u' || c == 'U' || c == 'x' || c == 'X' ||
		c == 'c' || c == 'C')
		return (1);
	else
		return (0);
}

int is_flag(char c)
{
	if (c == '#' || c == '-' || c == '+' || c == '0' || c == ' ')
		return (1);
	else
		return (0);
}

void	put_to_value(t_pattern *tmp, char flag)
{
	if (flag == '#')
		tmp->hash = 1;
	else if (flag == '-')
		tmp->minus = 1;
	else if (flag == '+')
		tmp->plus = 1;
	else if (flag == '0')
		tmp->zero = 1;
	else if (flag == ' ')
		tmp->space = 1;
}

void	show_tmp(t_pattern tmp)
{
	printf("hash: %d\n", tmp.hash);
	printf("minus: %d\n", tmp.minus);
	printf("plus: %d\n", tmp.plus);
	printf("zero: %d\n", tmp.zero);
	printf("space: %d\n", tmp.space);
	printf("width: %d\n", tmp.width);
	printf("precision: %d\n", tmp.precision);
	printf("type: %c\n", tmp.type);
}

void	print(va_list argptr, t_pattern tmp)
{
	if (tmp.type == 's')
		flag_s(argptr, tmp);
	else if (tmp.type == 'c')
		flag_c(argptr, tmp);
	else if (tmp.type == 'd' || tmp.type == 'i')
		flag_integer(argptr, tmp);
	else if (tmp.type == 'o')
		flag_o(argptr, tmp);
	else if (tmp.type == 'D' || tmp.type == 'O' || tmp.type == 'U')
		flag_unsigned(argptr, tmp);
	else if (tmp.type == 'x')
		flag_x(argptr, tmp);
	else if (tmp.type == 'X')
		flag_X(argptr, tmp);
	else if (tmp.type == '%')
		flag_persent(argptr, tmp);
}

int		ignored_error(char flag1, char flag2)
{
	ft_printf("%s	warning:%s flag '%c' is ignored when flag '%c' is present\n", RED, OFF, flag1, flag2);
	return (0);
}

int		und_behavior_error(char flag, char type)
{
	ft_printf("%s	warning:%s flag '%c' results in undefined behavior with '%c' conversion specifier\n",
		RED, OFF, flag, type);
	return (0);
}

int		invalid_specifier(char type)
{
	ft_printf("%s	warning:%s invalid conversion specifier '%c'\n", RED, OFF, type);
	return (0);
}

int		check_flags(t_pattern tmp)
{
	if (!is_type(tmp.type))
		return (invalid_specifier(tmp.type));

	if (tmp.space == 1 && tmp.plus == 1)
		return (ignored_error(' ', '+'));
	if (tmp.zero == 1 && tmp.minus == 1)
		return (ignored_error('0', '-'));

	if (tmp.type == 'o' && tmp.plus == 1)
		return(und_behavior_error('+', 'o'));
	if (tmp.type == 'o' && tmp.space == 1)
		return(und_behavior_error(' ', 'o'));
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list		argptr;
	int			i;
	t_pattern	tmp;
	int 		start;

	va_start(argptr, format); /* the last defined variable as parameter */
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%') /* qualifier */
		{
			tmp = new_value();
			i++;
			while (is_flag(format[i]))
				put_to_value(&tmp, format[i++]);
			start = i;
			while (ft_isdigit(format[i]))
				i++;
			tmp.width = ft_atoi(ft_strsub(format, start, i - start));
			if (format[i] == '.')
			{
				start = i + 1;
				while (ft_isdigit(format[++i]))
					;
			}
			tmp.precision = ft_atoi(ft_strsub(format, start, i - start));
			tmp.type = format[i];
			if (check_flags(tmp) == 0)
				return (0);
			print(argptr, tmp);
			// show_tmp(tmp);
		}
		else
			ft_putchar(format[i]);
	}

	return (100500);
}


int	main(void)
{
	int i = 1335345;
	char *s = "abcdefghijk";
	char c = 42;

	s = "abc";
	// i = 12;
	// printf("%d\n%.5d\n", i, i);
	// printf("%o\n%+   10o\n", i, i);
	// printf("%x\n%+   10x\n", i, i);
	// printf("%s\n%.5s\n", s, s);
	// printf("%c %0c\n", c, c);

	// printf("%p\n%#p\n", &i, &i);

	// printf("%20i\n", i);
	// ft_printf("%U\n", i);

	// ft_printf("%w10o\n", i);
	// ft_printf("%10o\n", i);
	printf("%3o\n", i);
	ft_printf("%3o\n", i);
	// ft_printf("%+ d\n", 12);
	// ft_printf("%0-d%s\n", i, s);
	// printf("%##+- 0005d\n", i);
	// ft_printf("%-000+#123.567o\n", i);
	// printf("%s\n", itoa_base(i, 16, 0));
	// ft_printf("%s\n%d\n%i\n%o\n%q", "one", 2, 300, 9, 7);
	// printf("ORIGINAL: %0*.*f\n", 8, 4, 2.5);
	// printf("ORIGINAL: %08.4f\n", 2.5);
	// printf("ORIGINAL: %-20s\n", "a");
	// printf("%b\n", 255);
}

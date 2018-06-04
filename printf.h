/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 14:06:06 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/01 14:06:10 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# define NONE 0
# define HH 1
# define H 2
# define Z 3
# define L 4
# define LL 5
# define J 6
#define _7bits 127
#define _11bits 2047
#define _16bits 65535
// # define MINUS "-"
// # define PLUS "+"
// # define SPACE " "
// # define ZERO "0"
// # define hEX "0x"
// # define HEX "0X"
// # define RED "\033[1;31m"
// # define OFF "\033[0m"
# include <stdarg.h>
# include <stdio.h> //trash
# include <unistd.h>
# include <stdlib.h>

typedef struct 	s_pattern
{
	int hash;
	int minus;
	int plus;
	int space;
	int zero;
	int width;
	int precision;
	int cast;
	char type;
}				t_pattern;

typedef struct	s_spaces
{
	int start;
	int end;
	int zeroes;
	char *prefix; /* o - 0, x - 0x, X - 0X, i - { -, +, ' ' } */

}				t_spaces;

int		ft_printf(const char *format, ...);
char	*itoa_base(uintmax_t num, int base, int letters);
int		ft_atoi(const char *str);
char	*ft_itoa(intmax_t number);
int		ft_countdigits(intmax_t n);
int		ft_isdigit(int c);
int		ft_putchar(int c);
int		ft_putstr(char const *s);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
int		ft_strequ(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
size_t	ft_strlen(const char *s);


int		type_o(va_list argptr, t_pattern tmp);
int		type_hex(va_list argptr, t_pattern tmp);
int		type_integer(va_list argptr, t_pattern tmp);
int 	type_s(va_list argptr, t_pattern tmp);
int		print_c(int c, t_pattern tmp);
int		type_c(va_list argptr, t_pattern tmp);
int		type_unsigned(va_list argptr, t_pattern tmp);

t_spaces	new_spaces(void); //type_o
int			get_size(int c); //type_s
#endif

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
# define RED "\033[1;31m"
# define OFF "\033[0m"
# include <stdarg.h>
# include <stdio.h> //trash
# include "libft/libft.h"

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

typedef struct	s_spaces
{
	int start;
	int end;
	int zeroes;
}				t_spaces;

int		ft_printf(const char *format, ...);
char	*itoa_base(int num, int base, int letters);

void	type_o(va_list argptr, t_pattern tmp);
void	type_x(va_list argptr, t_pattern tmp);

t_spaces	new_spaces(void); //type_o

void	tests_o(void);
void	tests_x(void);

#endif

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

int		ft_printf(const char *format, ...);
char	*itoa_base(int num, int base, int letters);

#endif

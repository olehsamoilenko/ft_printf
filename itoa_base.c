/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 13:40:39 by osamoile          #+#    #+#             */
/*   Updated: 2018/05/01 13:40:45 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	count(intmax_t num, int base)
{
	int		count;

	count = 0;
	while (num > 0)
	{
		num /= base;
		count += 1;
	}
	return (count);
}

static char	convert(int digit, int letters)
{
	if (digit >= 0 && digit <= 9)
		return (digit + '0');
	if (digit >= 10 && digit <= 16)
	{
		if (letters == 0)
			return ('a' + digit - 10);
		else
			return ('A' + digit - 10);
	}
	return (0);
}

char		*itoa_base(intmax_t num, int base, int letters) /* 0 - lower, 1 - upper */
{
	char	*res;
	int		len;

	if (num <= 0)
		return (ft_strdup("0"));
	len = count(num, base);
	// printf("LEN: %d\n", len);
	res = (char*)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	while (num != 0)
	{
		// printf("%c\n", convert(num % base));
		len--;
		res[len] = convert(num % base, letters);
		num /= base;
	}
	return (res);
}

#include "printf.h"

int	type_s(va_list argptr, t_pattern tmp)
{
	char *str;
	t_spaces spaces;

	str = va_arg(argptr, char*);
	spaces = new_spaces();
	
	if (tmp.precision != 0)
		str = ft_strsub(str, 0, tmp.precision);
	// spaces.zeroes = tmp.precision - ft_strlen(str);
	if (spaces.zeroes < 0)
		spaces.zeroes = 0;
	spaces.start = tmp.width /*- spaces.zeroes*/ - ft_strlen(str);
	if (spaces.start < 0)
		spaces.start = 0;

	if (tmp.minus == 1)
	{
		spaces.end = spaces.start;
		spaces.start = 0;
	}

	
	// show_tmp(tmp);
	// ft_printf("spaces.start: %d\n", spaces.start);
	// ft_printf("spaces.end: %d\n", spaces.end);
	// ft_printf("spaces.zeroes: %d\n", spaces.zeroes);

	while (spaces.zeroes-- > 0)
		str = ft_strjoin("0", str);
	str = ft_strjoin(spaces.prefix, str);
	while (spaces.start-- > 0)
		str = ft_strjoin(" ", str);
	while (spaces.end-- > 0)
		str = ft_strjoin(str, " ");
	ft_putstr(str);
	return(ft_strlen(str));
}

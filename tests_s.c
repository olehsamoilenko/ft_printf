#include "printf.h"

void	tests_s(void)
{
	char *s = "abcdef";
	char *s0 = "";
	char *s1 = "a";
	int value;
	int j;

	ft_printf("========== simple ==========\n"); j = 1;

	value = printf("%d OR: %s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %s@", j, s1); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== width ==========\n"); j = 1;

	value = printf("%d OR: %10s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %10s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %10s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %10s@", j, s1); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %3s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %3s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %3s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %3s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %3s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %3s@", j, s1); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== precision ==========\n"); j = 1;

	value = printf("%d OR: %.10s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %.10s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.10s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %.10s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.10s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %.10s@", j, s1); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.3s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %.3s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.3s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %.3s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %.3s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %.3s@", j, s1); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== width + precision ==========\n"); j = 1;

	value = printf("%d OR: %3.10s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %3.10s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10.3s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %10.3s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %2.4s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %2.4s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %4.2s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %4.2s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10.20s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %10.20s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %20.10s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %20.10s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10.20s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %10.20s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %20.10s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %20.10s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %10.20s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %10.20s@", j, s1); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %20.10s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %20.10s@", j, s1); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== width + precision + minus ==========\n"); j = 1;

	value = printf("%d OR: %-3.10s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-3.10s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10.3s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10.3s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-2.4s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-2.4s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-4.2s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-4.2s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10.20s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10.20s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-20.10s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-20.10s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10.20s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10.20s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-20.10s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-20.10s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-10.20s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-10.20s@", j, s1); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %-20.10s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %-20.10s@", j, s1); printf(" VALUE: %d\n", value);
	j++;

	ft_printf("========== width + precision + minus + plus + hash + zero + space ==========\n"); j = 1;

	value = printf("%d OR: %+-# 03.10s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %+-# 03.10s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %+-# 010.3s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %+-# 010.3s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %+-# 02.4s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %+-# 02.4s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %+-# 04.2s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %+-# 04.2s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %+-# 010.20s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %+-# 010.20s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %+-# 020.10s@", j, s); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %+-# 020.10s@", j, s); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %+-# 010.20s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %+-# 010.20s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %+-# 020.10s@", j, s0); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %+-# 020.10s@", j, s0); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %+-# 010.20s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %+-# 010.20s@", j, s1); printf(" VALUE: %d\n", value);
	j++;
	value = printf("%d OR: %+-# 020.10s@", j, s1); printf(" VALUE: %d\n", value);
	value = ft_printf("%d FT: %+-# 020.10s@", j, s1); printf(" VALUE: %d\n", value);
	j++;
}

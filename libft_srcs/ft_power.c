#include "libft.h"

int	ft_power(int num, int power)
{
	int	total;

	if (power < 0 || num < 1)
		return (0);
	total = 1;
	while (power > 0)
	{
		total *= num;
		power--;
	}
	return (total);
}

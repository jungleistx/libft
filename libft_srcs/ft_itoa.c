/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:34:44 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:30:25 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*zero_itoa(void)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * 2);
	if (!ptr)
		ft_exit_error("ft_itoa.c", 3);
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

static char	*neg_itoa(int n, int size)
{
	char	*ptr;
	long	cpy;

	if (n == 0)
	{
		ptr = zero_itoa();
		return (ptr);
	}
	else
	{
		cpy = n;
		cpy *= -1;
		ptr = (char *)malloc(size + 1);
		if (!ptr)
			ft_exit_error("ft_itoa.c", 2);
		ptr[size--] = '\0';
		while (cpy > 0)
		{
			ptr[size--] = cpy % 10 + '0';
			cpy /= 10;
		}
	}
	ptr[size] = '-';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size;
	long	copy;

	copy = n;
	size = 0;
	while (copy != 0)
	{
		copy /= 10;
		size++;
	}
	if (n <= 0)
		return (neg_itoa(n, size + 1));
	ptr = (char *)malloc(size + 1);
	if (!ptr)
		ft_exit_error("ft_itoa.c", 1);
	ptr[size] = '\0';
	while (n != 0)
	{
		ptr[--size] = n % 10 + '0';
		n /= 10;
	}
	return (ptr);
}

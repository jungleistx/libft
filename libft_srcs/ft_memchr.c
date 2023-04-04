/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:07:14 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 23:12:52 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*copy;

	if (!s)
		ft_exit_error("ft_memchr.c", 31);
	copy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (copy[i] == (unsigned char)c)
			return (&copy[i]);
		i++;
	}
	return (NULL);
}

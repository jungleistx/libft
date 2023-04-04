/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:14:34 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/04 15:27:21 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst || !src)
		ft_exit_error("ft_memmove.c", 7);
	i = 0;
	if (dst > src)
	{
		while (len > 0)
		{
			*(char *)&dst[i + len - 1] = *(char *)&src[i + len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			*(char *)&dst[i] = *(char *)&src[i];
			i++;
		}
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:19:49 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 23:18:54 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst || !src)
		ft_exit_error("ft_memcpy.c", 33);
	i = 0;
	while (i < n)
	{
		*(char *)&dst[i] = *(char *)&src[i];
		i++;
	}
	return (dst);
}

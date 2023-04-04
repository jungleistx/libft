/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:14:08 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 23:10:19 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	if (!dst || !src)
		ft_exit_error("ft_memccpy.c", 30);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)&dst[i] = *(unsigned char *)&src[i];
		if (*(unsigned char *)&src[i] == (unsigned char)c)
			return (&dst[++i]);
		else
			i++;
	}
	return (NULL);
}

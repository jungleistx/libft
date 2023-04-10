/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:19:49 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:30:59 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

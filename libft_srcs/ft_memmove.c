/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:14:34 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:31:04 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

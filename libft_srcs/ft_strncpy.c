/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:03:40 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 22:23:11 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	size;
	int				i;

	if (!dst || !src)
		ft_exit_error("ft_strncpy.c", 20);
	i = 0;
	size = 0;
	while (size < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		size++;
	}
	while (size < len)
	{
		dst[i] = '\0';
		i++;
		size++;
	}
	return (dst);
}

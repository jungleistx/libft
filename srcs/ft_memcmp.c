/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:35:55 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:53:13 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2)
		ft_exit_error("ft_memcmp.c", 32);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)&s1[i] != *(unsigned char *)&s2[i])
			return (*(unsigned char *)&s1[i] - *(unsigned char *)&s2[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:07:14 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:30:52 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

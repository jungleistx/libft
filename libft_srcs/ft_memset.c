/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:00:36 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 23:23:16 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	letter;
	unsigned int	i;

	if (!b)
		ft_exit_error("ft_memset.c", 34);
	letter = c;
	i = 0;
	while (i < len)
	{
		*(char *)&b[i] = letter;
		i++;
	}
	return (b);
}

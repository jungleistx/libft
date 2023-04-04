/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:36:59 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 21:25:00 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(size);
	if (!ptr)
		ft_exit_error("ft_memalloc.c", 6);
	i = 0;
	while (i < size)
	{
		*(char *)&ptr[i] = 0;
		i++;
	}
	return (ptr);
}

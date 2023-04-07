/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:36:59 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:53:05 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

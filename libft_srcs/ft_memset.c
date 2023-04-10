/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:00:36 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:31:18 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

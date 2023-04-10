/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:11:47 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:32:50 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(size + 1);
	if (!ptr)
		ft_exit_error("ft_strnew.c", 21);
	i = 0;
	while (i < size + 1)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

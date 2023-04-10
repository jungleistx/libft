/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:58:13 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:30:00 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	if (!s)
		ft_exit_error("ft_bzero.c", 44);
	ptr = (char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

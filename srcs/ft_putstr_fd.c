/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:31:15 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:54:19 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		i;
	char	*ptr;

	if (s == NULL)
		return ;
	i = 0;
	ptr = (char *)s;
	while (ptr[i])
	{
		write(fd, &ptr[i], 1);
		i++;
	}
}

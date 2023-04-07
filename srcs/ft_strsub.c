/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:30:54 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:55:41 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (s == NULL)
		ft_exit_error("ft_strsub.c", 25);
	ptr = (char *) malloc(len + 1);
	if (!ptr)
		ft_exit_error("ft_strsub.c", 26);
	i = 0;
	while (i < len)
	{
		if (s[i] == '\0')
		{
			while (i < len)
				ptr[i++] = '\0';
			break ;
		}
		ptr[i++] = s[start++];
	}
	ptr[i] = '\0';
	return (ptr);
}

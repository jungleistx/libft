/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:20:26 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:55:18 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int				i;
	int				j;
	unsigned long	size;

	if (!s1 || !s2)
		ft_exit_error("ft_strncat.c", 41);
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	size = 0;
	while (size < n)
	{
		if (s2[j] == '\0')
		{
			s1[i] = '\0';
			return (s1);
		}
		s1[i++] = s2[j++];
		size++;
	}
	s1[i] = '\0';
	return (s1);
}

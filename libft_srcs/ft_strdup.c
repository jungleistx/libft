/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:28:45 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:32:14 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	if (!s1)
		ft_exit_error("ft_strdup.c", 42);
	s2 = (char *) malloc(sizeof(*s2) * ft_strlen(s1) + 1);
	if (!s2)
		ft_exit_error("ft_strdup.c", 43);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

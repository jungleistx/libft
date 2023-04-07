/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:42:25 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:54:30 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	if (!s)
		ft_exit_error("ft_strchr.c", 36);
	ptr = (char *) s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			ptr = (char *) &s[i];
			return (ptr);
		}
		i++;
	}
	if (s[i] == c)
	{
		ptr = (char *) &s[i];
		return (ptr);
	}
	return (NULL);
}

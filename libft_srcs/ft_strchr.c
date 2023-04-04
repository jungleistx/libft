/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:42:25 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 23:32:29 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:39:57 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/25 00:05:14 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	if (!haystack || !needle)
		ft_exit_error("ft_strstr.c", 45);
	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j])
			{
				if (needle[j] != haystack[i + j])
					break ;
				j++;
			}
			if (needle[j] == '\0' && needle[j - 1] == haystack[i + j - 1])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

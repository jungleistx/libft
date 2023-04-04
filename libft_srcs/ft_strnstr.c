/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:07:31 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/25 00:08:33 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*copy;

	if (!haystack || !needle)
		ft_exit_error("ft_strnstr.c", 46);
	copy = (char *)haystack;
	i = -1;
	if (!needle[0])
		return (copy);
	while (copy[++i])
	{
		j = 0;
		while (i + j < len && needle[j])
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (haystack[i + j - 1] == needle[j - 1] && needle[j] == '\0')
			return (&copy[i]);
		if (i + j == len && needle[j] != '\0')
			return (NULL);
	}
	return (NULL);
}

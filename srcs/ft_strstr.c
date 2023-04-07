/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:39:57 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:55:38 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

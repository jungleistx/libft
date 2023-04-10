/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:07:31 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:32:52 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

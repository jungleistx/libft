/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:47:55 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 23:59:39 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	letter;
	char	*copy;

	if (!s)
		ft_exit_error("ft_strrchr.c", 8);
	letter = c;
	copy = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (copy[i] == letter)
			return (&copy[i]);
		i--;
	}
	if (copy[i] == letter)
		return (&copy[i]);
	else
		return (NULL);
}

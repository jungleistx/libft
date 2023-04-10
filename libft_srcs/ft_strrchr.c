/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:47:55 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:32:55 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

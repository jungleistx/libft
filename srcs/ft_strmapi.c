/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:08:06 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:55:15 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr;

	if (s == NULL)
		ft_exit_error("ft_strmapi.c", 15);
	ptr = (char *)malloc(ft_strlen(s) + 1);
	if (!ptr)
		ft_exit_error("ft_strmapi.c", 16);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = s[i];
	return (ptr);
}

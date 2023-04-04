/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:35:16 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 21:40:05 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	if (s == NULL)
		ft_exit_error("ft_strmap.c", 13);
	fresh = (char *)malloc(ft_strlen(s) + 1);
	if (!fresh)
		ft_exit_error("ft_strmap.c", 14);
	i = 0;
	while (s[i])
	{
		fresh[i] = f(s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}

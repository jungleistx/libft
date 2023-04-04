/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:14:18 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 21:33:17 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int		i;

	if (s1 == NULL || s2 == NULL)
		ft_exit_error("ft_strequ.c", 9);
	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	if (s1[i] != s2[i])
		return (0);
	return (1);
}

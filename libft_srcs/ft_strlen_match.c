/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_match.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:53:31 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 23:43:11 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_match(char *str, char delimiter)
{
	size_t	i;

	if (!str)
		ft_exit_error("ft_strlen_match.c", 39);
	i = -1;
	while (str[++i])
	{
		if (str[i] == delimiter)
			return (i);
	}
	return (0);
}

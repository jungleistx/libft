/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_match.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:53:31 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:55:07 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

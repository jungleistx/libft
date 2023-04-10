/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:58:04 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:32:04 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strcount(char *str, char target)
{
	int	i;
	int	found;

	if (!str)
		ft_exit_error("ft_strcount.c", 37);
	i = -1;
	found = 0;
	while (str[++i])
	{
		if (str[i] == target)
			found++;
	}
	return (found);
}

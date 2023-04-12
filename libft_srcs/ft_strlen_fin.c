/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_fin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:46:47 by skattankakk       #+#    #+#             */
/*   Updated: 2023/04/12 14:51:24 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int ft_strlen_fin(char *str)
{
	int i;
	int len;

	if (!str)
		ft_exit_error("ft_strlen_fin.c", 48);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == -61 && str[i + 1])	// first value of ä/ö
		{
			if (str[i + 1] == -74 || str[i + 1] == -92)	// second value of ä/ö
				i++;
		}
		len++;
		i++;
	}
	return (len);
}

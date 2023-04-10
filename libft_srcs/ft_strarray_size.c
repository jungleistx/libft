/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarray_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:53:47 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:31:47 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strarray_size(char **arr)
{
	int	i;

	if (!arr || !arr[0])
		return (0);
	i = 0;
	while (arr[i])
		i++;
	return (i);
}

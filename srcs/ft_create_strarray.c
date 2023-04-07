/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_strarray.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:33:52 by skattankakk       #+#    #+#             */
/*   Updated: 2023/04/07 14:52:11 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**ft_create_strarray(int size)
{
	char	**arr;

	arr = (char **) malloc(sizeof(char *) * (size + 1));
	if (!arr)
		ft_exit_error("ft_create_strarray.c", 47);
	while (size >= 0)
		arr[size--] = NULL;
	return (arr);
}

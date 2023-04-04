/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_strarray.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:18:05 by skattankakk       #+#    #+#             */
/*   Updated: 2023/04/04 19:36:54 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_dup_strarray(char **original)
{
	int		size;
	char	**new;
	int		i;

	size = ft_strarray_size(original);
	new = ft_create_strarray(size);
	i = -1;
	while (original[++i])
		new[i] = ft_strdup(original[i]);
	new[i] = NULL;
	return (new);
}

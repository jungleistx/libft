/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_strarray.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:23:22 by skattankakk       #+#    #+#             */
/*   Updated: 2023/04/07 14:52:07 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_copy_strarray(char **src, char **dst)
{
	int	i;

	i = -1;
	while (src[++i])
		dst[i] = ft_strdup(src[i]);
}

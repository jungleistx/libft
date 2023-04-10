/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:21:37 by skattankakk       #+#    #+#             */
/*   Updated: 2023/04/10 23:29:57 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bubblesort_str(char **list)
{
	int		i;
	int		sorted;
	char	*tmp;

	if (list && *list)
	{
		sorted = 0;
		while (sorted == 0)
		{
			i = 0;
			sorted = 1;
			while (list[i + 1] != NULL)
			{
				if (ft_strcmp(list[i], list[i + 1]) > 0)
				{
					sorted = 0;
					tmp = list[i];
					list[i] = list[i + 1];
					list[i + 1] = tmp;
				}
				i++;
			}
		}
	}
}

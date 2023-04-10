/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:09:08 by skattankakk       #+#    #+#             */
/*   Updated: 2023/04/10 23:29:53 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bubblesort_int(int *list, int size)
{
	int	i;
	int	sorted;
	int	tmp;

	if (size > 1 && list)
	{
		sorted = 0;
		while (sorted == 0)
		{
			sorted = 1;
			i = 0;
			while (i < size - 1)
			{
				if (list[i] > list[i + 1])	// swap numbers
				{
					sorted = 0;
					tmp = list[i];
					list[i] = list[i + 1];
					list[i + 1] = tmp;
				}
				i++;
			}
			size--;		// last position always sorted, can be skipped next round. slight optimization
			if (size < 2)
				sorted = 1;
		}
	}
}

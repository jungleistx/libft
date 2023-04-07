/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:53:43 by skattankakk       #+#    #+#             */
/*   Updated: 2023/04/07 14:53:50 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_power(int num, int power)
{
	int	total;

	if (power < 0 || num < 1)
		return (0);
	total = 1;
	while (power > 0)
	{
		total *= num;
		power--;
	}
	return (total);
}

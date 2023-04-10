/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:47:01 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:31:32 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	tmp;
	long	copy;

	copy = n;
	if (copy < 0)
	{
		write(fd, "-", 1);
		copy *= -1;
	}
	if (copy > 9)
		ft_putnbr_fd(copy / 10, fd);
	tmp = copy % 10 + '0';
	write(fd, &tmp, 1);
}

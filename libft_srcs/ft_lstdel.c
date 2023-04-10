/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:50:06 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:30:32 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*copy;

	if (!del)
		return ;
	copy = *alst;
	while (copy)
	{
		tmp = copy->next;
		del(copy->content, copy->content_size);
		free(copy);
		copy = tmp;
	}
	*alst = NULL;
}

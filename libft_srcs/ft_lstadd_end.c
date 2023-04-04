/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:11:59 by rvuorenl          #+#    #+#             */
/*   Updated: 2022/10/24 23:05:29 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstadd_end(t_list *head, t_list *new)
{
	t_list	*copy;

	copy = head;
	while (copy->next != NULL)
		copy = copy->next;
	copy->next = new;
	new->next = NULL;
	return (head);
}

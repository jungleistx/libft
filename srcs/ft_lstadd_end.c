/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:11:59 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:57:06 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

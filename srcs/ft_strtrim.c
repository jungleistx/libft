/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:29:42 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/07 14:55:43 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	count_mid(char const *s)
{
	int	i;
	int	st;

	st = 0;
	while ((s[st] == ' ' || s[st] == '\n' || s[st] == '\t') && s[st] != '\0')
		st++;
	if (s[st] == '\0')
		return (0);
	i = st;
	while (s[i])
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	i++;
	i -= st;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		st;
	char	*ptr;

	if (s == NULL)
		ft_exit_error("ft_strtrim.c", 27);
	st = 0;
	while ((s[st] == ' ' || s[st] == '\n' || s[st] == '\t') && s[st] != '\0')
		st++;
	i = count_mid(s);
	ptr = (char *) malloc(i + 1);
	if (!ptr)
		ft_exit_error("ft_strtrim.c", 28);
	ptr[i--] = '\0';
	while (i >= 0)
	{
		ptr[i] = s[i + st];
		i--;
	}
	return (ptr);
}

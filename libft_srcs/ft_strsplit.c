/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skattankakku <skattankakku@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:20:49 by rvuorenl          #+#    #+#             */
/*   Updated: 2023/04/10 23:32:57 by skattankakk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_words(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			while (s[i] == c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				break ;
			res++;
		}
		i++;
	}
	return (res);
}

static int	len_nth_word(char const *s, char c, int n)
{
	int	i;
	int	word;
	int	len;

	i = 0;
	len = 0;
	word = 0;
	while (s[i] == c)
		i++;
	while (word < n)
	{
		while (s[i] != c)
			i++;
		while (s[i] == c)
			i++;
		word++;
	}
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void	copy_nth_word(char *dst, char const *s, char c, int pos)
{
	int	j;
	int	i;
	int	word;

	word = 0;
	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (word < pos)
	{
		while (s[i] != c)
			i++;
		while (s[i] == c)
			i++;
		word++;
	}
	while (s[i] != c && s[i] != '\0')
		dst[j++] = s[i++];
	dst[j++] = '\0';
}

char	**ft_strsplit(char const *s, char c)
{
	int		words;
	char	**array;
	int		i;

	if (s == NULL)
		ft_exit_error("ft_strsplit.c", 22);
	words = ft_words(s, c);
	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (!array)
		ft_exit_error("ft_strsplit.c", 23);
	i = 0;
	while (i < words)
	{
		array[i] = (char *) malloc(sizeof(char) * len_nth_word(s, c, i) + 1);
		if (!array[i])
			ft_exit_error("ft_strsplit.c", 24);
		copy_nth_word(array[i], s, c, i);
		i++;
	}
	array[i] = NULL;
	return (array);
}

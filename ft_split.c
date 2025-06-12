/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:41:42 by garslan           #+#    #+#             */
/*   Updated: 2025/06/12 07:02:01 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeall(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	word_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			count++;
			s++;
		}
	}
	return (count);
}

static char	**ft_split_words(const char *s, char c, char **result, int start)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j++] = ft_substr(s, start, i - start);
			if (!result[j - 1])
			{
				ft_freeall(result);
				return (NULL);
			}
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		start;

	start = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc((sizeof(char *) * (word_count(s, c) + 1)));
	if (!result)
		return (NULL);
	ft_split_words(s, c, result, start);
	return (result);
}

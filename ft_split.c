/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:26:36 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 09:45:42 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const *s, char c)
{
	size_t	i;
	t_split	dd;

	dd.in_word = 0;
	dd.count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			dd.in_word = 0;
		else if (!dd.in_word && s[i] != c)
		{
			dd.in_word = 1;
			dd.count++;
		}
		i++;
	}
	return (dd.count);
}

static size_t	my_strlen(const char *s, char c)
{
	t_split	dd;

	dd.len = 0;
	while (s[dd.len] && s[dd.len] != c)
		dd.len++;
	return (dd.len);
}

static	char	*create_word(const char *s, size_t word_len)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc(word_len + 1);
	if (!word)
		return (NULL);
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**fill_array(char **array, const char *s, char c, size_t words)
{
	t_split	dd;

	dd.i = 0;
	dd.j = 0;
	while (s[dd.i] && dd.j < words)
	{
		if (s[dd.i] != c)
		{
			dd.word_len = my_strlen(&s[dd.i], c);
			array[dd.j] = create_word(&s[dd.i], dd.word_len);
			if (!array[dd.j])
			{
				while (dd.j-- > 0)
					free(array[dd.j]);
				free(array);
				return (NULL);
			}
			dd.i += dd.word_len;
			dd.j++;
		}
		else
			dd.i++;
	}
	array[dd.j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**array;

	if (!s)
		return (NULL);
	words = word_counter(s, c);
	array = malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (fill_array(array, s, c, words));
}

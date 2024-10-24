/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:08:26 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/24 21:15:51 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split, int j)
{
	while (j >= 0)
		free(split[j--]);
	free(split);
}

static int counter(char const *s, char c)
{
	int count;
	int in_word;

	count = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
			s++;
		}
	}
	return (count);

}

static char	*create_word(const char *s, int start, int end)
{
	char *word;
	int i;

	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;	
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static int	fill_split(char **split, const char *s, char c)
{
	int i = 0, j = 0, start = -1;

	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if (s[i] == c)
				split[j] = create_word(s, start, i);
			else
				split[j] = create_word(s, start, i + 1);
			if (!split[j++])
				return (-1);
			start = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char **split;

	if (!s)
		return (NULL);

	split = (char **)malloc((counter(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (fill_split(split, s, c) == -1)
	{
		free_split(split, counter(s, c) - 1);
		return (NULL);
	}

	return (split);
}

/*
#include <stdio.h>

int main()
{
	char *s = "qlq manin todo bien?";
	char **split = ft_split(s, ' ');
	int i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);

	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:08:26 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/23 13:34:29 by rpaparon         ###   ########.fr       */
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

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);

}

static char *duplicate(const char *s, int start, int end)
{
	char *word;
	int i;

	word = (char *)malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;	
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	if(!s)
		return (NULL);

	int i;
	int j;
	int start = -1;

	i = 0;
	j = 0;

	char **split = (char **)malloc((counter(s, c) + 1));
	if (!split)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && start >= 0)
		{
			if (s[i + 1] == '\0' && s[i] != c)
			i++;
			split[j] = duplicate(s, start, i);
			if (!split[j])
			{
				free_split(split, j - 1);
				return (NULL);
			}
			j++;
			start = -1;
		}
		i++;
	}
		split[j] = NULL;
		return (split);
}

/*
#include <stdio.h>

int main()
{
	char *s = "Hello World!";
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
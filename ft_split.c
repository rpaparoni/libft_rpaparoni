/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:08:26 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/21 14:42:42 by rpaparon         ###   ########.fr       */
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

	char **split = (char **)malloc((counter(s, c) + 1));
	if (!split)
		return (NULL);
	while (s[i])
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || !s[i]) && start >= 0)
		{
			split[j] = duplicate(s, start, i);
			if (!split[j])
			{
				free_split(split, j - 1);
				return (NULL);
			}
			j++;
			start = -1;
		}
		else
			i++;
}

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
}
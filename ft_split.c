/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:55:09 by jlira             #+#    #+#             */
/*   Updated: 2023/10/23 12:54:04 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			i++;
		}
		s++;
	}
	return (i + 1);
}

static int	words_copy(char **V, char const *str, char sep, int count)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	while (str[count + len] != sep && str[count + len] != '\0')
	{
		len++;
	}
	*V = malloc(sizeof(char) * (len + 1));
	if (!V)
		return (-1);
	while (str[count] == sep)
		count++;
	while (str[count] != sep && str[count] != '\0')
	{
		(*V)[j] = str[count];
		count++;
		j++;
	}
	(*V)[j] = '\0';
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*str;
	int		len;
	int		i;
	int		pos;

	str = ft_strtrim(s, &c);
	len = count_words(str, c);
	split = (char **)malloc((sizeof(char *) * len) + sizeof(NULL));
	if (!split)
		return (NULL);
	i = 0;
	pos = -1;
	while (str[++pos] != '\0')
	{
		pos = words_copy(&split[i], str, c, pos);
		i++;
	}
	split[i] = NULL;
	return (split);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:55:09 by jlira             #+#    #+#             */
/*   Updated: 2023/10/30 01:54:42 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	i;
	int	trigger;

	if (!str)
		return (0);
	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static int	words_copy(char **V, char const *str, char sep, int pos)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	while (str[pos] == sep)
		pos++;
	while (str[pos + len] != sep && str[pos + len] != '\0')
	{
		len++;
	}
	if (len == 0)
		*V = NULL;
	else
	{
		*V = malloc(sizeof(char) * (len + 1));
		if (!V)
			return (-1);
	}
	while (str[pos] != sep && str[pos] != '\0')
	{
		(*V)[j] = str[pos];
		pos++;
		j++;
	}
	(*V)[j] = '\0';
	return (pos);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		len;
	int		i;
	int		pos;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	split = (char **)malloc((sizeof(char *) * (len + 1)));
	if (!split)
		return (NULL);
	i = 0;
	pos = 0;
	while (len != 0 && s[pos] != '\0' && i < len)
	{
		pos = words_copy(&split[i], s, c, pos);
		if (pos < 0)
		{
			while (i != 0)
			{
				free(split[i]);
				i--;
			}
			return (NULL);
		}
		i++;
	}
	split[i] = NULL;
	return (split);
}

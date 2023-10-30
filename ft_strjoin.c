/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:32:34 by jlira             #+#    #+#             */
/*   Updated: 2023/10/30 01:59:30 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * len + 1);
	if (!joined)
		return (NULL);
	while (i < len)
	{
		if (i < ft_strlen(s1))
			joined[i] = s1[i];
		else
		{
			joined[i] = s2[j];
			j++;
		}
		i++;
	}
	joined[i] = '\0';
	return (joined);
}

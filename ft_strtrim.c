/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:38:33 by jlira             #+#    #+#             */
/*   Updated: 2023/10/30 11:22:00 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	int		i;
	char	*new_string;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	len = ft_strlen(s1);
	start = 0;
	end = len - 1;
	i = 0;
	while (start <= end && ft_strchr(set, s1[start]))
	{
		start++;
		i++;
	}
	while (end > start && ft_strchr(set, s1[end--]))
	{
		i++;
	}
	new_string = ft_substr(s1, start, len - i);
	return (new_string);
}

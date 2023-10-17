/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:38:33 by jlira             #+#    #+#             */
/*   Updated: 2023/10/17 20:18:05 by jlira            ###   ########.fr       */
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

	len = ft_strlen(s1);
	start = 0;
	end = len - 1;
	i = 0;
	while (start <= end && ft_strchr(set, s1[start]))
	{
		start++;
		i++;
	}
	while (ft_strchr(set, s1[end]) && end > start)
	{
		end--;
		i++;
	}
	new_string = ft_substr(s1, start, len - i);
	return (new_string);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:39:57 by jlira             #+#    #+#             */
/*   Updated: 2023/10/18 14:39:13 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		count;
	size_t		i;
	size_t		j;

	count = 0;
	i = 0;
	j = 0;
	if (*little == '\0')
		return (big);
	while (big[i] != '\0' && count <= len)
	{
		while (big[i + j] == little[j] && count <= len)
		{
			if (little[j + 1] == '\0')
				return (big + i);
			j++;
			count++;
		}
		j = 0;
		count++;
		i++;
	}
	return (NULL);
}

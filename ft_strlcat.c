/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:32:24 by jlira             #+#    #+#             */
/*   Updated: 2023/10/11 21:14:03 by jlirasv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(src);
	while (i < size && dst[i] != '\0')
		i++;
	k = i;
	while ((i + 1 < size) && src[i - k] != '\0')
	{
		dst[i] = src[i - k];
		i++;
	}
	if (k < size)
		dst[i] = '\0';
	return (j + k);
}

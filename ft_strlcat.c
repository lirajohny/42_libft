/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:32:24 by jlira             #+#    #+#             */
/*   Updated: 2023/10/11 20:30:08 by jlirasv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	k = i;
	j = 0;
	while (src[j] != '\0' && (i + 1 < dstsize))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (k < dstsize)
		dst[i] = '\0';
	return (ft_strlen(src) + k);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:00:51 by jlira             #+#    #+#             */
/*   Updated: 2023/09/29 11:02:17 by jlirasv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char *temp_dst;
	unsigned char *temp_src;

	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	temp_dst =(unsigned char *)dst;
	temp_src =(unsigned char *)src;
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
		if (i == n)
		{
			i = 0;
		}
	}
	ft_memcpy(dst, temp_dst, n);
	return (dst);
}

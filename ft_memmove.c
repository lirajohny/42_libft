/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:00:51 by jlira             #+#    #+#             */
/*   Updated: 2023/10/11 11:45:10 by jlirasv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char *temp_dst;
	unsigned char *temp_src;

	i = n;
	if (dst == NULL && src == NULL)
		return (dst);
	temp_dst =(unsigned char *)dst;
	temp_src =(unsigned char *)src;
	if (temp_src < temp_dst)
	{
		while (i)
		{
			i--;
			temp_dst[i] = temp_src[i];
		}
		return (dst);
	}
	ft_memcpy(temp_dst, temp_src, n);
	return (dst);
}

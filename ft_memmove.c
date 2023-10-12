/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:00:51 by jlira             #+#    #+#             */
/*   Updated: 2023/10/11 21:02:45 by jlirasv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	i = n;
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	if (temp_dest == temp_src)
		return (dest);
	if (temp_src < temp_dest && temp_dest < temp_src + n)
	{
		while (i)
		{
			i--;
			temp_dest[i] = temp_src[i];
		}
	}
	else
		ft_memcpy(temp_dest, temp_src, n);
	return (dest);
}

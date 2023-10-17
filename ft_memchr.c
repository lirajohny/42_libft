/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <jlira@student.42.rj>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:04:50 by jlira             #+#    #+#             */
/*   Updated: 2023/10/17 15:24:52 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char			*str;
	char			*s1;

	s1 = (char *)s;
	str = NULL;
	i = 0;
	while (i < n && *s1)
	{
		if (*s1 == c)
		{
			str = (char *)s1;
			break ;
		}
		i++;
		s1++;
	}
	return ((char *)str);
}

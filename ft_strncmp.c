/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:09:49 by jlira             #+#    #+#             */
/*   Updated: 2023/10/17 19:29:12 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *s1 && (*s1 == *s2))
	{
		i++;
		s1++;
		s2++;
	}
	if (i == n)
		return (0);
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}

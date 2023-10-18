/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <jlira@student.42.rj>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:50:57 by jlira             #+#    #+#             */
/*   Updated: 2023/10/18 11:00:40 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	s = s + len - 1;
	while (len >= 0)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s--;
		len--;
	}
	return (NULL);
}

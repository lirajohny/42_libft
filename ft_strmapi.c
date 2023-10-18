/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <jlira@student.42.rj>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:32:15 by jlira             #+#    #+#             */
/*   Updated: 2023/10/18 10:51:17 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	if (!s || !f)
		return ((void *)0);
	ret = (char *)ft_strdup(s);
	if (!ret)
		return ((void *)0);
	i = 0;
	while (ret[i])
	{
		ret[i] = f(i, ret[i]);
		i++;
	}
	return (ret);
}

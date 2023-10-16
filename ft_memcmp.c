/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <jlira@student.42.rj>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:27:55 by jlira             #+#    #+#             */
/*   Updated: 2023/10/16 12:07:06 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t  i;
  char *str1;
  char *str2;

  i = 0;
  str1 = (char *)s1;
  str2 = (char *)s2;
  while (i < n && *str1 && (*str1 == *str2))
  {
    i++;
    str1++;
    str2++;
  }
  if (i == n)
    return (0);
  return (*(const unsigned char *)str1 - *(const unsigned char *)str2);
}

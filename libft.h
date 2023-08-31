/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:56:59 by jlira             #+#    #+#             */
/*   Updated: 2023/08/30 18:00:10 by johnylira        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define	LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int	ft_isprint(int c);
int	ft_alnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s); 
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);
#endif

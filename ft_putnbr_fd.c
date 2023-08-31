/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:32:24 by jlira             #+#    #+#             */
/*   Updated: 2023/08/31 11:49:34 by johnylira        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_nbr(int nb, int fd)
{
	int	last_digit;

	if (nb == 0)
		return ;
	last_digit = nb % 10;
	ft_print_nbr(nb / 10, fd);
	last_digit = last_digit + '0';
	ft_putchar_fd(last_digit, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putstr_fd("2147483648", fd);
			return ;
		}
		ft_print_nbr(n * (-1), fd);
	}
	else if (n == 0)
		write(1, "0", 1);
	else
		ft_print_nbr(n, fd);
}

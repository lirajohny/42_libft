/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:17:17 by jlira             #+#    #+#             */
/*   Updated: 2023/10/26 15:25:41 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	void	*temp;
	t_list	*ptr;	

	ptr = lst;
	while (ptr->next != NULL)
	{
		ptr->next = ptr->next;
	}
	ptr->next = temp;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 04:07:10 by airis             #+#    #+#             */
/*   Updated: 2021/10/23 14:31:01 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*f;

	f = *lst;
	if (lst)
	{
		if (*lst)
		{
			while (f->next)
				f = f->next;
			f->next = new;
		}
		else
			*lst = new;
	}
}

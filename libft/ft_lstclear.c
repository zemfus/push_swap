/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 04:15:26 by airis             #+#    #+#             */
/*   Updated: 2021/10/23 13:25:51 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*f;

	if (!*lst || !lst || !del)
		return ;
	while (*lst)
	{
		f = *lst;
		*lst = (*lst)->next;
		if (f->content)
			del(f->content);
		free(f);
	}
}

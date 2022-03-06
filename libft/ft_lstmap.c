/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 04:21:12 by airis             #+#    #+#             */
/*   Updated: 2021/10/23 13:25:58 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ls;
	t_list	*ps;

	ls = NULL;
	while (lst)
	{
		ps = ft_lstnew(f(lst->content));
		if (!ps)
		{
			ft_lstclear(&ls, del);
			return (NULL);
		}
		ft_lstadd_back(&ls, ps);
		lst = lst->next;
	}
	return (ls);
}

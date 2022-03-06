/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:35:58 by airis             #+#    #+#             */
/*   Updated: 2021/10/23 13:25:28 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	str = malloc(count * size);
	if (!str)
		return ((void *)0);
	i = 0;
	while (i < count * size)
		str[i++] = 0;
	return (str);
}

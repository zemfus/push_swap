/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:04:18 by airis             #+#    #+#             */
/*   Updated: 2021/10/23 13:26:35 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*ans;
	unsigned char	*str;

	ans = (void *)0;
	str = (unsigned char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			ans = str + i;
		i++;
	}
	if (!(unsigned char)c)
		return ((char *)str + i);
	return ((char *)ans);
}

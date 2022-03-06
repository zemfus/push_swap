/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:25:38 by airis             #+#    #+#             */
/*   Updated: 2021/10/23 13:26:34 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			k;

	i = 0;
	k = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[k])
		{
			while (haystack[i + k] == needle[k] && haystack[i + k]
				&& needle[k] && i + k < len)
				k++;
			if (!needle[k])
				return ((char *)haystack + i);
		}
		i++;
		k = 0;
	}
	return (NULL);
}

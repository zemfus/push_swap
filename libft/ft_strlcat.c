/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:26:40 by airis             #+#    #+#             */
/*   Updated: 2021/10/23 13:26:25 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	j = dest_length;
	i = 0;
	if (dest_length < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dest_length + i < dstsize - 1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	if (dest_length > dstsize)
		dest_length = dstsize;
	return (dest_length + src_length);
}

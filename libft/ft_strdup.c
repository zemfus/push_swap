/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:49:26 by airis             #+#    #+#             */
/*   Updated: 2021/10/23 13:26:21 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	str = malloc(sizeof(char) * len + 1);
	i = 0;
	if (str)
	{
		while (i < len + 1)
		{
			str[i] = s1[i];
			i++;
		}
	}
	return (str);
}

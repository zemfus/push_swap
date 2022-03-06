/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:50:56 by airis             #+#    #+#             */
/*   Updated: 2021/10/23 13:26:24 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (len1 + len2) + 1);
	if (!str)
		return (NULL);
	while (s1[k])
		str[i++] = (char)s1[k++];
	k = 0;
	while (s2[k])
		str[i++] = (char)s2[k++];
	str[i] = '\0';
	return (str);
}

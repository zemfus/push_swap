/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:22:47 by airis             #+#    #+#             */
/*   Updated: 2021/10/23 16:02:19 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int a)
{
	if (a <= 0)
		a = -a;
	return (a);
}

static int	ft_numb_size(int numb)
{
	int	len;

	len = 0;
	if (numb <= 0)
		len++;
	while (numb != 0)
	{
		numb /= 10;
		len++;
	}
	return (len);
}

static void	ft_rev(char *str)
{
	size_t	len;
	char	c;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		c = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = c;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		sign;
	size_t	i;

	sign = 1;
	i = 0;
	len = ft_numb_size(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		sign = -sign;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[i++] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		str[i] = '-';
	ft_rev(str);
	return (str);
}

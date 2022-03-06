/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airis <airis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:02:51 by airis             #+#    #+#             */
/*   Updated: 2021/10/24 16:46:07 by airis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	numb;
	int	sign;
	int	count;

	numb = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		sign = -sign;
	if (*str == '-' || *str == '+')
		str++;
	count = 0;
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (count > 18 && sign == -1)
			return (0);
		if (count++ > 18)
			return (-1);
		numb = (numb * 10) + *str++ - '0';
	}
	return (numb * sign);
}

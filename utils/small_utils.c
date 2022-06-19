/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:38:08 by czang             #+#    #+#             */
/*   Updated: 2022/06/19 13:40:33 by czang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/philosopher.h"

u_int16_t	ft_strlen(t_string str)
{
	t_string	temp;

	if (!str)
		return (0);
	temp = str;
	while (*str)
		str++;
	return (str - temp);
}

int32_t	ft_atoi(t_string str)
{
	int64_t		temp_atoi;
	int32_t		atoi;

	atoi = 1;
	if (str[0] == '-')
	{
		str++;
		atoi = -1;
	}
	if (str[0] == '+')
		str++;
	if (ft_strlen(str) > 10)
		return (-1);
	while (*str)
	{
		if (*str > '9' || *str < '0')
			return (-1);
		temp_atoi = temp_atoi * 10 + (*str - 48);
		str++;
	}
	if (temp_atoi > INT_MAX || -temp_atoi < INT_MIN)
		return (-1);
	return (atoi *= temp_atoi);
}

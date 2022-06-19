/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:12:10 by czang             #+#    #+#             */
/*   Updated: 2022/06/19 14:07:02 by czang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/philosopher.h"

bool	parsing_philo(int ac, char **av, t_time *time)
{
	if (ac != 4 || ac != 5)
		return (false);
	time->time_to_die = ft_atoi(argv[2]);
	time->time_to_eat = ft_atoi(argv[3]);
	time->time_to_sleep = ft_atoi(argv[4]);
	if (ft_atoi(argv[1]) <= 0)
		return (false);
	if (time->time_to_die <= 0)
		return (false);
	if (time->time_to_eat <= 0)
		return (false);
	if (time->time_to_sleep <= 0)
		return (false);
	if (time->time_to_sleep != ft_atoi(av[ac]))
		time->n_must_eat = ft_atoi(av[ac]);
	if (ft_atoi(av[ac]) <= 0)
		return (false);
	else
		time->n_must_eat = 0;
	return(true);
}

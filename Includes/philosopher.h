/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:39:21 by czang             #+#    #+#             */
/*   Updated: 2022/06/19 14:10:00 by czang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

typedef char*	t_string;

typedef struct	s_time
{
	int32_t			time_to_die;
	int32_t			time_to_eat;
	int32_t			time_to_sleep;
	u_int32_t		n_must_eat;
	u_int32_t		n_philo;
}	t_time;

typedef struct s_philo
{
	bool			fork;
	int32_t			*attr;
}	t_philo;

#endif

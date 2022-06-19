/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:12:57 by czang             #+#    #+#             */
/*   Updated: 2022/06/19 14:10:07 by czang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/philosopher.h"

int	main(int argc, char **argv)
{
	t_time		time;

	argv[argc] = NULL;
	--argc;
	if (parsing_philo(argc, argv, &time) == NULL)
		return (0);
	init_tab_struct(philo);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachat <anachat@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:10:59 by anachat           #+#    #+#             */
/*   Updated: 2025/03/19 21:57:57 by anachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>

typedef struct s_fork
{
	int fork_id;
	pthread_mutex_t fork;
}	t_fork;

typedef struct s_philo
{
	int		id;
	long	meals_c;
	long	last_eat;
	int		is_full;
	t_fork	*l_fork;	
	t_fork	*r_fork;	
}	t_philo;

#endif

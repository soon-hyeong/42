/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojoo <soojoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:11:44 by soojoo            #+#    #+#             */
/*   Updated: 2023/08/10 23:55:12 by soojoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<pthread.h>

typedef struct	s_info
{
	int		num_of_philo;
	int		time_to_die;
	int		time_to_eat;
	int		time_to_sleep;
}	t_info;

typedef struct	s_philo
{
	pthread_t	tid;
	int			left_fork;
	int			right_fork;
	int			numbers_eat;
}	t_philo;

typedef struct	data
{
	t_info	*info;
	t_philo	*philos;
	int		*forks;
}	t_data;

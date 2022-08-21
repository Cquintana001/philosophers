/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_data.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:02:40 by caquinta          #+#    #+#             */
/*   Updated: 2022/08/21 12:07:51 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_DATA_H
# define FILL_DATA_H

t_philo *fill_data( char *x, char *i,char *j, char *h, pthread_mutex_t *m);
t_philo *fill_data_second(t_philo *philos, int index, int limit);
#endif
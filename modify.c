/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertlebatteux <albertlebatteux@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 18:53:00 by ale-batt          #+#    #+#             */
/*   Updated: 2015/10/08 11:19:05 by albertlebatteux  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

void	ft_modify_value(t_hash *hash, char *key, char *newvalue)
{
	t_hash	*tmp;

	tmp = hash;
	while (tmp)
	{
		if (ft_strcmp(tmp->key, key) == 0)
		{
			tmp->value = ft_strdup(newvalue);
			break ;
		}
		tmp = tmp->next;
	}
}

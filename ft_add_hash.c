/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_hash.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertlebatteux <albertlebatteux@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 18:53:00 by ale-batt          #+#    #+#             */
/*   Updated: 2015/10/08 11:19:02 by albertlebatteux  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

static t_hash	*ft_set_value(char *key, char *value)
{
	t_hash	*new;

	new = (t_hash *)malloc(sizeof(t_hash));
	new->key = ft_strdup(key);
	new->value = ft_strdup(value);
	new->next = NULL;
	return (new);
}

void			ft_add_hash(t_hash **hash, char *key, char *value)
{
	t_hash	*new;
	t_hash	*tmp;

	new = ft_set_value(key, value);
	if (*hash == NULL)
		*hash = new;
	else
	{
		tmp = *hash;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}

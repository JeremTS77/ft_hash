/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_dico.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertlebatteux <albertlebatteux@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 18:53:55 by ale-batt          #+#    #+#             */
/*   Updated: 2015/10/08 11:18:02 by albertlebatteux  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

char	*ft_get_value_hash(t_hash *hash, char *key)
{
	t_hash	*tmp;

	tmp = hash;
	while (tmp)
	{
		if (ft_strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

char	*ft_get_key_hash(t_hash *hash, char *value)
{
	t_hash	*tmp;

	tmp = hash;
	while (tmp)
	{
		if (ft_strcmp(tmp->value, value) == 0)
			return (tmp->key);
		tmp = tmp->next;
	}
	return (NULL);
}

void	ft_remove_key_hash(t_hash *hash, char *key)
{
	t_hash	*tmp;
	t_hash	*prev;

	tmp = hash;
	prev = tmp;
	while (tmp)
	{
		if (ft_strcmp(tmp->key, key) == 0)
		{
			prev->next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = prev;
		}
		prev = tmp;
		tmp = tmp->next;
	}
}

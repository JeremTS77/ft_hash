/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dico.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertlebatteux <albertlebatteux@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 18:53:00 by ale-batt          #+#    #+#             */
/*   Updated: 2015/10/08 11:18:02 by albertlebatteux  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

void	ft_read_hash(t_hash *hash)
{
	t_hash	*tmp;

	tmp = hash;
	while (tmp)
	{
		ft_putstr("value : ");
		ft_putnull(tmp->value);
		ft_putstr("\t|\tkey : ");
		ft_putnull(tmp->key);
		ft_putstr("\n");
		tmp = tmp->next;
	}
}

void	ft_free_hash(t_hash *hash)
{
	t_hash *tmp;

	while (hash)
	{
		tmp = hash;
		free(hash->value);
		free(hash->key);
		hash = hash->next;
		free(tmp);
	}
	free(hash);
}

int		ft_len_hash(t_hash *hash)
{
	int		i;
	t_hash	*tmp;

	i = 0;
	tmp = hash;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dico.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertlebatteux <albertlebatteux@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 18:53:38 by ale-batt          #+#    #+#             */
/*   Updated: 2015/10/08 11:18:02 by albertlebatteux  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_hash_H
# define FT_hash_H

# include "libft.h"

typedef struct		s_hash
{
	char			*key;
	char			*value;
	struct s_hash	*next;
	struct s_hash	*first;

}					t_hash;

void				ft_add_hash(t_hash **hash, char *key, char *value);
void				ft_read_hash(t_hash *hash);
void				ft_free_hash(t_hash *hash);
int					ft_len_hash(t_hash *hash);

char				*ft_get_value_hash(t_hash *hash, char *key);
char				*ft_get_key_hash(t_hash *hash, char *value);
void				ft_remove_key_hash(t_hash *hash, char *key);

void				ft_modify_value(t_hash *hash, char *key, char *newvalue);
void				ft_sort_hash(t_hash **hash);

#endif

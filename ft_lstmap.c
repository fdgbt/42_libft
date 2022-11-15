/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:38:54 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/30 16:01:08 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *first;
	t_list *tmp;

	first = NULL;
	tmp = NULL;
	while (lst)
	{
		if (!(new = (*f)(lst)))
			return (NULL);
		if (!first)
			first = new;
		else
			tmp->next = new;
		tmp = new;
		lst = lst->next;
	}
	return (first);
}

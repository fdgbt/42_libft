/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:32:12 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/29 14:29:10 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstfind(t_list **alst, void *elem)
{
	t_list *current;

	if (!alst || !elem)
		return (NULL);
	current = *alst;
	while (current)
	{
		if (!ft_memcmp(current->content, elem, current->content_size))
			return (current);
		current = current->next;
	}
	return (NULL);
}

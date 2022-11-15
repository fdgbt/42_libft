/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:31:22 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/30 16:00:59 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *last;

	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		last = *alst;
		*alst = (*alst)->next;
	}
	ft_memdel((void **)&last);
}

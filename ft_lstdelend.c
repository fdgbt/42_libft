/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:38:12 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/28 16:53:29 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelend(t_list **alst, void (*del)(void *, size_t))
{
	while ((*alst)->next != NULL)
		*alst = (*alst)->next;
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}

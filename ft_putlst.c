/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:56:11 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/28 15:59:21 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst(t_list **first)
{
	t_list *current;

	current = *first;
	while (current)
	{
		ft_putstr((char *)current->content);
		ft_putchar('\n');
		current = current->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 11:41:37 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/28 11:45:50 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_int_tab(int *tab, size_t len)
{
	size_t	index;
	int		up;

	index = 1;
	if (len > 0)
	{
		while (index < len)
		{
			if (tab[index] < tab[index - 1])
			{
				up = tab[index - 1];
				tab[index - 1] = tab[index];
				tab[index] = up;
				index = 0;
			}
			index++;
		}
	}
}

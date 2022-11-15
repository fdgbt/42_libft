/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 11:28:34 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/28 11:35:10 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_max(int *tab, size_t len)
{
	size_t	index;
	int		max;

	index = 1;
	if (len == 0)
		return (0);
	else
	{
		max = tab[0];
		while (index < len)
		{
			if (tab[index] > max)
				max = tab[index];
			index++;
		}
	}
	return (max);
}

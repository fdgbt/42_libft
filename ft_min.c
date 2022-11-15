/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 11:28:34 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/28 11:34:39 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_min(int *tab, size_t len)
{
	size_t	index;
	int		min;

	index = 1;
	if (len == 0)
		return (0);
	else
	{
		min = tab[0];
		while (index < len)
		{
			if (tab[index] < min)
				min = tab[index];
			index++;
		}
	}
	return (min);
}

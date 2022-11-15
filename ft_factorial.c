/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 09:38:03 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/28 09:47:42 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_factorial(int nb)
{
	if (nb >= 0 && nb <= 12)
		if (nb == 1 || nb == 2)
			return (1);
		else
			return (nb * ft_factorial(nb - 1));
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 13:00:29 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/23 21:47:02 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int result;

	if (!s1 || !s2)
		return (0);
	result = ft_strncmp(s1, s2, n);
	if (result == 0)
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 23:11:53 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/23 19:52:19 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (tofind[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == tofind[j])
		{
			j++;
			if (tofind[j] == '\0' && (i + j) <= n)
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}

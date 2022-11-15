/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 23:11:53 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/23 19:53:25 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *tofind)
{
	size_t i;
	size_t j;

	i = 0;
	if (tofind[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == tofind[j])
		{
			j++;
			if (tofind[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}

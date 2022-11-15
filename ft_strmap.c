/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:22:48 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/23 21:44:54 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	size;
	char			*ptr;

	if (!f || !s)
		return (NULL);
	size = ft_strlen(s);
	ptr = ft_strnew(size);
	if (ptr != NULL)
	{
		while (size-- > 0)
			ptr[size] = f(s[size]);
	}
	return (ptr);
}

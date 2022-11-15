/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:22:48 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/30 15:57:02 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	index;
	unsigned int	size;

	index = 0;
	if (!f || !s)
		return (NULL);
	size = ft_strlen(s);
	ptr = ft_strnew(size);
	if (ptr != NULL)
	{
		while (index < size)
		{
			ptr[index] = f(index, s[index]);
			index++;
		}
		ptr[index] = '\0';
	}
	return (ptr);
}

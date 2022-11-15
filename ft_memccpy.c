/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 23:18:18 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/29 20:00:24 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	t_byte *ptr;
	t_byte *mem;

	ptr = (t_byte *)dest;
	mem = (t_byte *)src;
	while (n > 0)
	{
		*ptr = *mem;
		ptr++;
		if (*mem == (t_byte)c)
			return ((void *)ptr);
		mem++;
		n--;
	}
	return (NULL);
}

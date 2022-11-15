/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 23:18:18 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/29 22:28:35 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_byte *ptr;

	if (n == 0)
		return (NULL);
	ptr = (t_byte *)s;
	while (--n > 0 && *ptr != (t_byte)c)
		ptr++;
	if (*ptr == (t_byte)c)
		return ((void *)ptr);
	else
		return (NULL);
}

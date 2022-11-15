/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 22:02:42 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/29 14:26:49 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_dst;
	size_t len_src;
	size_t i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size <= len_dst)
		return (size + len_src);
	else
	{
		dst += len_dst;
		while (i < len_src && i < (size - len_dst - 1))
		{
			dst[i] = src[i];
			i++;
		}
		while (i < (size - len_dst))
		{
			dst[i] = '\0';
			i++;
		}
		return (len_dst + len_src);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 10:08:35 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/28 12:43:42 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	str = ft_strlowcase(str);
	if (ft_islower(str[index]))
		str[index] = ft_toupper(str[index]);
	while (str[index] != '\0')
	{
		if (!ft_isalnum(str[index]))
			if (ft_islower(str[index + 1]))
				str[index + 1] = ft_toupper(str[index + 1]);
		index++;
	}
	return (str);
}

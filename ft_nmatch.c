/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nmatch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 11:52:28 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/28 11:52:54 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		search(char *s1, char *s2, int x1, int x2)
{
	if ((s1[x1] == '\0') && (s2[x2] == '\0'))
		return (1);
	if ((s1[x1] != '\0') && (s2[x2] == '*'))
		return (search(s1, s2, (x1 + 1), x2) + search(s1, s2, x1, (x2 + 1)));
	if ((s1[x1] == '\0') && (s2[x2] == '*'))
		return (search(s1, s2, x1, (x2 + 1)));
	if (s1[x1] == s2[x2])
		return (search(s1, s2, (x1 + 1), (x2 + 1)));
	else
		return (0);
}

int				ft_nmatch(char *s1, char *s2)
{
	int x1;
	int x2;

	x1 = 0;
	x2 = 0;
	return (search(s1, s2, x1, x2));
}

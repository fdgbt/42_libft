/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 11:58:38 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/28 12:01:52 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_search(char *s1, char *s2, int x1, int x2)
{
	if ((s1[x1] == '\0') && (s2[x2] == '\0'))
		return (1);
	if ((s1[x1] == '\0') && (s2[x2] == '*'))
		return (ft_search(s1, s2, x1, (x2 + 1)));
	if ((s2[x2] == '*') && (s1[x1] != '\0'))
	{
		if (ft_search(s1, s2, x1, (x2 + 1)) == 1)
			return (ft_search(s1, s2, x1, (x2 + 1)));
		else
			return (ft_search(s1, s2, (x1 + 1), x2));
	}
	if (s1[x1] == s2[x2])
		return (ft_search(s1, s2, (x1 + 1), (x2 + 1)));
	else
		return (0);
}

int				ft_match(char *s1, char *s2)
{
	int x1;
	int x2;

	x1 = 0;
	x2 = 0;
	return (ft_search(s1, s2, x1, x2));
}

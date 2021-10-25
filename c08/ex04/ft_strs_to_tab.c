/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 09:30:55 by fgomez            #+#    #+#             */
/*   Updated: 2020/10/28 15:12:57 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int							ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char						*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = -1;
	while (src[++i])
		;
	if (!(dest = malloc(sizeof(char *) * i + 1)))
		return (NULL);
	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str			*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str		*dest;
	int						i;

	if (!(dest = malloc(sizeof(*dest) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		i++;
	}
	dest[i].str = 0;
	return (dest);
}

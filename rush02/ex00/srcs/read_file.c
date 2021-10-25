/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:38:29 by jbarette          #+#    #+#             */
/*   Updated: 2020/10/27 11:01:40 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

int		ft_error(int file)
{
	if (file == -1)
	{
		write(1, "Error\n", 6);
	}
	return (0);
}

char	*split_file(char *tab)
{
	char	**t;
	int		len;

	t = ft_split(tab, "\n", &len);
	if (!(parse_dict(t)))
	{
		write(1, "Dict error\n", 11);
		return (NULL);
	}
	return (tab);
}

char	*read_file(char *name)
{
	char	*tab;
	char	c;
	int		fd;
	int		i;

	i = 0;
	fd = open(name, O_RDONLY);
	ft_error(fd);
	while (read(fd, &c, 1) > 0)
		i++;
	if (!(tab = malloc(sizeof(char) * i)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	close(fd);
	fd = open(name, O_RDONLY);
	i = 0;
	while (read(fd, &c, 1) > 0)
		tab[i++] = c;
	tab[i] = '\0';
	close(fd);
	return (split_file(tab));
}

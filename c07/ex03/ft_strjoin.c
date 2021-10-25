/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 09:53:41 by jbarette          #+#    #+#             */
/*   Updated: 2020/10/27 12:25:49 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int		ft_final_length(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length = length + (size - 1) * ft_strlen(sep) + 1;
	return (length);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s1[a])
		a++;
	while (s2[b])
	{
		s1[a + b] = s2[b];
		b++;
	}
	s1[a + b] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	char	*str;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	if (!(str = malloc(sizeof(char) * ft_final_length(size, strs, sep))))
		return (NULL);
	*str = 0;
	a = 0;
	while (a < size)
	{
		ft_strcat(str, strs[a]);
		if (a < size - 1)
			ft_strcat(str, sep);
		a++;
	}
	return (str);
}

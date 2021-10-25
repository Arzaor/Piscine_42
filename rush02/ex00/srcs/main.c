/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:38:50 by jbarette          #+#    #+#             */
/*   Updated: 2020/10/27 11:07:22 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

int	main(int ac, char **av)
{
	char	*buff;
	char	**dict;
	int		len;

	if (ac < 1 || ac > 3)
		put_str("error");
	else if (ac == 2)
	{
		buff = read_file("./numbers.dict");
		buff = clean_dic(buff);
		dict = ft_split(buff, ":\n", &len);
		if (!arg_is_valid(ac, av, dict, len))
			return (0);
	}
	else if (ac == 3)
	{
		buff = read_file(av[1]);
		buff = clean_dic(buff);
		dict = ft_split(buff, ":\n", &len);
		if (!arg_is_valid(ac, av, dict, len))
			return (0);
	}
	write(1, "\n", 1);
	return (0);
}

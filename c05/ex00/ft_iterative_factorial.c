/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 07:47:25 by jbarette          #+#    #+#             */
/*   Updated: 2020/10/15 17:09:22 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int total;
	int cur_value;

	if (nb < 0)
		return (0);
	total = 1;
	cur_value = 1;
	while (cur_value < nb + 1)
	{
		total = total * cur_value++;
	}
	return (total);
}

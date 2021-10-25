/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:58:57 by akotzky           #+#    #+#             */
/*   Updated: 2020/10/10 16:38:14 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(int w, char c1, char c2, char c3)
{
	int i;

	i = w;
	while (i != 0)
	{
		if (i == w)
			ft_putchar(c1);
		else if ((i < w) && (i > 1))
			ft_putchar(c2);
		else if (i == 1)
			ft_putchar(c3);
		i--;
	}
}

void	rush(int x, int y)
{
	int h;

	if (x > 0 && y > 0)
	{
		h = y;
		while (h > 0)
		{
			if (h == y)
				ft_putline(x, 'A', 'B', 'A');
			else if ((h < y) && (h > 1))
				ft_putline(x, 'B', ' ', 'B');
			else if (h == 1)
				ft_putline(x, 'C', 'B', 'C');
			h--;
			ft_putchar('\n');
		}
	}
}

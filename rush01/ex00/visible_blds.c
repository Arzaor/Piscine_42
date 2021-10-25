/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible_blds.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 16:57:05 by scuter            #+#    #+#             */
/*   Updated: 2020/10/18 18:32:42 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**gen_combs(void);

int		is_visible(int b1, int b2)
{
	int result;

	result = b1 - b2;

	if (result > 0)
		return (0);
	else
		return (1);
}

int		visible_blds(int *blds)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 1;
	count = 1;
	while (i < 4 && j < 4)
	{
		if (is_visible(blds[i], blds[j]))
		{
			count++;
			i = j;
		}
		j++;
	}
	return (count);
}

int		rev_visible_blds(int *blds)
{
	int i;
	int rev[4];

	i = 0;
	while (i < 4)
	{
		rev[3 - i] = blds[i];
		i++;
	}
	return (visible_blds(&rev[0]));
}
	

int		main(void)
{
	int comb[24][4];
	comb = gen_combs;

	int tab[4][4];
	int str[16] = {1, 3, 2, 3, 3, 2, 2, 1, 1, 2, 2, 4, 3, 2, 2, 1};
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (comb[i])
		{
			if (visible_blds(comb[i]) == str[15 - j] &&
					rev_visible_blds(comb[i]) == str[4 + j])
			{
				tab[j] = comb[i];
				j++;
				break ;
			}
			i++;
		}
	}

	i = 0;
	count = 0;
	while (i < 4)
	{
		if (visible_blds(tab[i][0]) == str[i] &&
					rev_visible_blds(tab[i][0]) == str[11 + i])
			count++;
		i++;
	}

	if (count == 4)
		return ...
	else
		...
}

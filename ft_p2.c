/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 20:02:13 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/09 23:08:32 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "alcu.h"

int		ft_p2(t_tray *tray, char p)
{
	int		i;
	int		j;

	i = tray->nb_l - 1;
	while (i != 0)
	{
		j = 1;
		while (tray->tab[i][j + 1] != 0)
		{
			if (tray->tab[i][j] == p)
			{
				if (tray->tab[i][j + 1] == p)
				{
					if (ft_put_p2(tray, i, j))
						return (1);
				}
			}
			j++;
		}
		i--;
	}
	return (0);
}

int		ft_put_p2(t_tray *tray, int i, int j)
{
	int		x;
	int		y;

	x = tray->nb_l - 1;
	while (tray->tab[x][j - 1] != '.' && x > 0)
		x--;
	y = tray->nb_l - 1;
	while (tray->tab[y][j + 2] != '.' && y > 0)
		y--;
	if (x == i && y == i)
		return (ft_put_part_ia(tray, j - 1));
	return (0);
}

int		ft_ia_p2(t_tray *tray)
{
	if (ft_p2(tray, 'O'))
		return (1);
	if (ft_p2(tray, 'X'))
		return (1);
	return (0);
}


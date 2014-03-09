/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ia_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 10:14:17 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/08 18:32:50 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "alcu.h"

int		ft_put_ia_two(t_tray *tray)
{
	if (ft_near_p4(tray, 'O'))
		return (1);
	if (ft_near_p4(tray, 'X'))
		return (2);
	else
	{
		if (ft_put_between(tray))
			return (4);
		if (ft_ia_one(tray) == 0)
			return (-1);
	}
	return (3);
}

int		ft_put_between(t_tray *tray)
{
	int		i;
	int		j;

	j = 1;
	while (j < tray->nb_c - 1)
	{
		i = tray->nb_l - 1;
		while (tray->tab[i][j] != '.')
			i--;
		if (tray->tab[i][j - 1] == 'X' && tray->tab[i][j + 1] == 'X')
			return (ft_put_part_ia(tray, j));
		j++;
	}
	return (0);
}

int		ft_put_part_ia(t_tray *tray, int nb)
{
	int		i;

	i = 0;
	while (tray->tab[i] != NULL)
	{
		if (tray->tab[i][nb] != '.')
			break ;
		i++;
	}
	if (i == 0)
		return (0);
	tray->tab[i - 1][nb] = 'O';
	ft_printf("IA put on %d\n\n", nb);
	return (1);
}


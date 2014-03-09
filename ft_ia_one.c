/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ia_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 06:50:52 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/08 18:31:26 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "alcu.h"

int		ft_ia_one(t_tray *tray)
{
	int		i;
	int		j;

	i = tray->nb_l - 1;
	while (i >= 0)
	{
		j = tray->nb_c / 2;
		if (ft_put_ia(tray, &i, j))
			return (1);
	}
	return (0);
}

int		ft_put_ia(t_tray *tray, int *i, int j)
{
	while (tray->tab[*i][j] != 0)
	{
		if (tray->tab[*i][j] == '.')
		{
			tray->tab[*i][j] = 'O';
			ft_printf("IA put on %d\n\n", j);
			return (1);
		}
		j++;
	}
	j = 0;
	while (j < tray->nb_c / 2)
	{
		if (tray->tab[*i][j] == '.')
		{
			tray->tab[*i][j] = 'O';
			ft_printf("IA put on %d\n\n", j);
			return (1);
		}
		j++;
	}
	(*i)--;
	return (0);
}

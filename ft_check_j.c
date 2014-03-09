/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_j.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 11:16:31 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/08 18:34:31 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "alcu.h"

int		ft_check_j_hor(t_tray *tray, int i, int j)
{
	int		x;

	x = tray->nb_l - 1;
	while (x > i)
	{
		if (tray->tab[x][j - 1] == '.')
			break ;
		x--;
	}
	if (x == i && tray->tab[x][j - 1] == '.')
		return (ft_put_part_ia(tray, j - 1));
	x = tray->nb_l - 1;
	while (x > i)
	{
		if (tray->tab[x][j + 3] == '.')
			break ;
		x--;
	}
	if (x == i && tray->tab[x][j + 3] == '.')
		return (ft_put_part_ia(tray, j + 3));
	return (0);
}

int		ft_check_j_vert(t_tray *tray, int i, int j)
{
	if (tray->tab[i - 1][j] == '.')
		return (ft_put_part_ia(tray, j));
	return (0);
}

int		ft_check_j_diag1(t_tray *tray, int i, int j)
{
	int		x;

	x = tray->nb_l - 1;
	while (x > i - 1)
	{
		if (tray->tab[x][j - 1] == '.')
			break ;
		x--;
	}
	if (x == i - 1 && tray->tab[x][j - 1] == '.')
		return (ft_put_part_ia(tray, j - 1));
	while (x > i + 3)
	{
		if (tray->tab[x][j - 3] == '.')
			return (0);
		x--;
	}
	if (x == i + 3 && tray->tab[x][j - 3] == '.')
		return (ft_put_part_ia(tray, j - 3));
	return (0);
}

int		ft_check_j_diag2(t_tray *tray, int i, int j)
{
	int		x;

	x = tray->nb_l - 1;
	while (x > i + 1)
	{
		if (tray->tab[x][j - 1] == '.')
			break ;
		x--;
	}
	if (x == i + 1 && tray->tab[x][j - 1] == '.')
		return (ft_put_part_ia(tray, j - 1));
	x = tray->nb_l - 1;
	while (x > i - 3)
	{
		if (tray->tab[x][j + 3] == '.')
			return (0);
		x--;
	}
	if (x == i - 3 && tray->tab[x][j + 3] == '.')
		return (ft_put_part_ia(tray, j + 3));
	return (0);
}

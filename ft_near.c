/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_near.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 05:34:58 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/09 19:58:54 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "alcu.h"

int		ft_p3_hor(t_tray *tray, char p, int i, int j)
{
	i = 0;
	while (tray->tab[i] != NULL)
	{
		j = 0;
		while (j < tray->nb_c - 2)
		{
			if (tray->tab[i][j] == p)
			{
				if (tray->tab[i][j + 1] == p)
				{
					if (tray->tab[i][j + 2] == p)
					{
						if (ft_check_j_hor(tray, i , j))
							return (1);
					}
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		ft_p3_vert(t_tray *tray, char p, int i, int j)
{
	i = 1;
	while (i < tray->nb_l - 2)
	{
		j = 0;
		while (tray->tab[i][j] != 0)
		{
			if (tray->tab[i][j] == p)
			{
				if (tray->tab[i + 1][j] == p)
				{
					if (tray->tab[i + 2][j] == p)
					{
						if ((ft_check_j_vert(tray, i , j)))
							return (1);
					}
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		ft_p3_diag1(t_tray *tray, char p, int i, int j)
{
	i = 1;
	while (i < tray->nb_l - 2)
	{
		j = 0;
		while (j < tray->nb_c - 2)
		{
			if (tray->tab[i][j] == p)
			{
				if (tray->tab[i + 1][j + 1] == p)
				{
					if (tray->tab[i + 2][j + 2] == p)
					{
						if (ft_check_j_diag1(tray, i , j) != 0)
							return (1);
					}
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_p3_diag2(t_tray *tray, char p, int i, int j)
{
	i = 3;
	while (tray->tab[i] != NULL)
	{
		j = 0;
		while (j < tray->nb_c - 2)
		{
			if (tray->tab[i][j] == p)
			{
				if (tray->tab[i - 1][j + 1] == p)
				{
					if (tray->tab[i - 2][j + 2] == p)
					{
						if (ft_check_j_diag2(tray, i , j) != 0)
							return (1);
					}
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

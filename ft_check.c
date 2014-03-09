/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 00:53:14 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/08 18:33:31 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "alcu.h"

int		ft_check_size(char *line, char *column)
{
	int		nb_l;
	int		nb_c;

	nb_l = ft_atoi(line);
	nb_c = ft_atoi(column);
	if (nb_l < 6)
		return (1);
	else if (nb_c < 7)
		return (2);
	return (0);
}

int		ft_check_equal(t_tray *tray)
{
	int		i;
	int		j;
	int		nb;

	i = nb = 0;
	while (tray->tab[i] != NULL)
	{
		j = 0;
		while (tray->tab[i][j] != 0)
		{
			if (tray->tab[i][j] == '.')
				nb++;
			j++;
		}
		j = 0;
		i++;
	}
	if (nb == 0)
		return (1);
	return (0);
}

int		ft_check_win(t_tray *tray, char p)
{
	if (ft_p4_hor(tray, p, 0, 0))
		return (1);
	if (ft_p4_vert(tray, p, 0, 0))
		return (1);
	if (ft_p4_diag1(tray, p, 0, 0))
		return (1);
	if (ft_p4_diag2(tray, p, 0, 0))
		return (1);
	return (0);
}

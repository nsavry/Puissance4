/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 02:51:23 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/09 19:35:34 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "alcu.h"

int		ft_solve(int nb_l, int nb_c)
{
	t_tray	*tray;
	char	*line;
	int		ret;

	line = NULL;
	tray = ft_init_begin(nb_l, nb_c);
	while (42)
	{
		if (ft_check_equal(tray) == 1)
			return (-1);
		ft_putendl("Put a number of column : ");
		if (ft_get_next_line(0, &line) != 1)
		{
			ft_putendl_fd("Error: EOF detected", 2);
			if (line != NULL)
				free(line);
			ft_free(tray);
			return (10);
		}
		if ((ret = ft_resolve(tray, line)) != 5)
		{
			ft_free(tray);
			return (ret);
		}
	}
}

int		ft_resolve(t_tray *tray, char *line)
{
	int		ret;

	if (ft_isnumber(line) == 0 || line[0] == 0)
		ft_error(3, 0);
	else if (ft_atoi(line) >= tray->nb_c || ft_atoi(line) < 0)
		ft_error(4, tray->nb_c - 1);
	else
	{
		if (ft_put_part(tray, ft_atoi(line)) == 0)
			ft_error(5, 0);
		else
		{
			if ((ret = ft_current(tray)) != 2)
			{
				free(line);
				return (ret);
			}
		}
	}
	free(line);
	return (5);
}

int		ft_put_part(t_tray *tray, int nb)
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
	tray->tab[i - 1][nb] = 'X';
	return (1);
}

int		ft_current(t_tray *tray)
{
	if (ft_check_win(tray, 'X'))
	{
		ft_display(tray);
		return (0);
	}
	ft_display(tray);
	if (ft_put_ia_two(tray) == 0)
		return (-1);
	if (ft_check_win(tray, 'O') == 1)
	{
		ft_display(tray);
		return (1);
	}
	ft_display(tray);
	return (2);
}

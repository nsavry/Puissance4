/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 03:06:53 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/08 18:08:03 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include "alcu.h"

void	ft_display(t_tray *tray)
{
	int		i;

	i = 0;
	ft_putchar(' ');
	ft_putchar(' ');
	while (i < tray->nb_c)
	{
		ft_putnbr(i % 10);
		i++;
	}
	i = 0;
	ft_putchar('\n');
	ft_putchar(' ');
	ft_putchar(' ');
	while (i < tray->nb_c)
	{
		ft_putchar('_');
		i++;
	}
	ft_putchar('\n');
	ft_display_two(tray, 0, 0);
}

void	ft_display_two(t_tray *tray, int i, int j)
{
	while (tray->tab[i] != NULL)
	{
		j = 0;
		ft_putnbr(i % 10);
		ft_putchar('|');
		while (tray->tab[i][j] != 0)
		{
			ft_putchar(tray->tab[i][j]);
			j++;
		}
		ft_putchar('|');
		ft_putchar('\n');
		j = 0;
		i++;
	}
	i = 0;
	ft_putchar(' ');
	ft_putchar(' ');
	while (i < tray->nb_c)
	{
		ft_putchar('_');
		i++;
	}
	ft_putchar('\n');
}

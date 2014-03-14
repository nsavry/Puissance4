/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 07:30:41 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/09 19:34:18 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "alcu.h"

t_tray	*ft_init_begin(int nb_l, int nb_c)
{
	t_tray	*tray;

	tray = malloc(sizeof(t_tray));
	tray->nb_l = nb_l;
	tray->nb_c = nb_c;
	ft_alloc_tab(tray);
	ft_rand(tray);
	return (tray);
}

void	ft_alloc_tab(t_tray *tray)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(*str) * (tray->nb_c + 1));
	while (i < tray->nb_c)
	{
		str[i] = '.';
		i++;
	}
	str[i] = 0;
	tray->tab = malloc(sizeof(char *) * (tray->nb_l + 1));
	tray->tab[tray->nb_l] = NULL;
	i = 0;
	while (i < tray->nb_l)
	{
		tray->tab[i] = ft_strdup(str);
		i++;
	}
	free(str);
}

void	ft_rand(t_tray *tray)
{
	if (rand() % 2)
	{
		ft_printf("\n-> HAL play first\n");
		ft_put_ia_two(tray);
		ft_display(tray);
	}
	else
	{
		ft_printf("\n-> You play first\n\n");
		ft_display(tray);
	}
}

void	ft_print_begin(void)
{
	ft_printf("|******************************************|\n");
	ft_printf("|*Hello, welcome in the game \"ConnectFour\"*|\n");
	ft_printf("|*You play with an artificial intelligence*|\n");
	ft_printf("|**************Is name is HAL**************|\n");
	ft_printf("|***************you play X !***************|\n");
	ft_printf("|***************HAL play O !***************|\n");
	ft_printf("|******************************************|\n");
}

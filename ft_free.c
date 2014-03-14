/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 08:03:33 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/08 10:00:32 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "alcu.h"

void	ft_free(t_tray *tray)
{
	int		i;

	i = 0;
	while (i < tray->nb_l + 1)
	{
		free(tray->tab[i]);
		i++;
	}
	free(tray->tab);
	free(tray);
}

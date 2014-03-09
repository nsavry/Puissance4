/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 00:42:34 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/08 09:59:55 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "alcu.h"

int		ft_error(int nb, int nb_c)
{
	if (nb == 0)
	{
		ft_putendl_fd("AlCu: Wrong Arguments", 2);
		ft_putendl_fd("Usage: Puissance4 nb_lines nb_column", 2);
	}
	else if (nb == 1)
		ft_putendl_fd("AlCu: Wrong Arguments\nnb_line must be over 5", 2);
	else if (nb == 2)
	{
		ft_putendl_fd("AlCu: Wrong Arguments", 2);
		ft_putendl_fd("nb_column must be over 6", 2);
	}
	else if (nb == 3)
		ft_putendl_fd("Error: This argument must be a number\n", 2);
	else if (nb == 4)
	{
		ft_putstr_fd("Error: This argument must be between 0 and ", 2);
		ft_putnbr_fd(nb_c, 2);
		ft_putstr_fd("\n\n", 2);
	}
	else if (nb == 5)
		ft_putendl_fd("Error: This column is full\n", 2);
	return (0);
}

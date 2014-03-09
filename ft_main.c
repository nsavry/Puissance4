/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 00:36:15 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/08 09:57:45 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include "libft.h"
#include "alcu.h"

int		main(int argc, char **argv)
{
	int		ret;

	srand(time(NULL));
	if (argc == 3)
	{
		if (ft_isnumber(argv[1]) == 0 || ft_isnumber(argv[2]) == 0)
			return (ft_error(0, 0));
		else if ((ret = ft_check_size(argv[1], argv[2])) != 0)
		{
			if (ret == 1)
				return (ft_error(1, 0));
			else if (ret == 2)
				return (ft_error(2, 0));
		}
		if ((ret = ft_solve(ft_atoi(argv[1]), ft_atoi(argv[2]))) == -1)
			ft_printf("hum, it's embarrassing, it's a tie\n");
		else if (ret == 0)
			ft_printf("you win\n");
		else if (ret == 1)
			ft_printf("IA win\n");
	}
	else
		ft_error(0, 0);
	return (0);
}

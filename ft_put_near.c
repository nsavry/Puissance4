/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_near.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 10:28:03 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/08 18:06:10 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "alcu.h"

int		ft_near_p4(t_tray *tray, char c)
{
	int		ret;

	if ((ret = ft_p3_hor(tray, c, 0, 0)))
		return (1);
	if (ft_p3_vert(tray, c, 0, 0))
		return (1);
	if (ft_p3_diag1(tray, c, 0, 0))
		return (1);
	if (ft_p3_diag2(tray, c, 0, 0))
		return (1);
	return (0);
}

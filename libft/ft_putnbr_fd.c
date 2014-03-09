/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 14:51:33 by nsavry            #+#    #+#             */
/*   Updated: 2014/03/08 10:06:22 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	ft_putstr_fd(str = ft_itoa(n), fd);
	free(str);
}

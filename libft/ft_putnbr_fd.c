/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:26:26 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/05 16:05:44 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Send to a number n to specific file descriptor*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		nbr %= 10;
	}
	nbr += '0';
	write(fd, &nbr, 1);
}

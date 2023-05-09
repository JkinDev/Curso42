/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:52:55 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/05 15:38:22 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Send character c to a specific file descriptor*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	char c = 'H';

// 	ft_putchar_fd(c, 1);
// }

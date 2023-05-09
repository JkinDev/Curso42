/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:12:05 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/04 16:25:20 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Send string to specific file descriptor*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// int main()
// {
// 	char s[] = "hola mundo";
// 	ft_putstr_fd(s, 1);
// }

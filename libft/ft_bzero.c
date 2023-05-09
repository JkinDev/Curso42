/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:21:47 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/28 13:20:27 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Sets the first part of an n object to null bytes (filling it with zeros'\0')*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char buffer[50] = "This a test of the bzero function";

// 	printf("Before: %s\n", buffer);
// 	ft_bzero(buffer, 1);
// 	printf("After: %s\n", buffer);
// }

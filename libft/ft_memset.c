/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:21:21 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/21 14:41:28 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Set memory a given value. Copies the character c to the firts n characters of
the string pointed, by the argument s*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	buffer[50] = "This is a test of the memset function";
// 	printf("Before: %s\n", buffer);
// 	ft_memset(buffer, '*', 8);
// 	printf("After: %s\n", buffer);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:55:29 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/26 12:46:19 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function locates the frst occurrence of character in string converted to
a unsigned char, returns a pointer to the byte located, or null if no exits*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;

	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char prueba1[] = "http://42malagafundaciontef.com";

// 	int busca = 't';

// 	printf("%s", ft_memchr(prueba1, busca, 2));
// 	return(0);
// }

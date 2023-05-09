/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:10:02 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/21 19:01:54 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Find the first occurence of a character in a string*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

// int main()
// {
// 	char str[] = "programacion";

// 	printf("%s", ft_strchr(str, 'm'));
// 	return(0);
// }

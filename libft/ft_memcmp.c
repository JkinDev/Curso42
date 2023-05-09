/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:49:27 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/27 10:26:51 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*compares the first num bytes of the block of memory pointed by s1 to the
first num bytes pointed by s2, returning zero if they all match or a value
different from zero representing which is greater if they do not.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && n > 0)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char comp1[] = "buenastardes";
// 	char comp2[] = "buenastardes";

// 	printf("%i", ft_memcmp(comp1, comp2, 9));
// 	return(0);
// }

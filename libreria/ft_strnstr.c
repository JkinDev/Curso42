/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:36:45 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/27 12:35:33 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Locate a substring in a string*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = ft_strlen(needle);
	if (needle[j] == '\0' || haystack == needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && needle[j] != '\0'
			&& haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (j == k)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	char str1[] = "ayer me fui a comprar el pan";
// 	char str2[] = "comprar";

// 	printf("%s", ft_strnstr(str1, str2, 21));
// 	return(0);
// }

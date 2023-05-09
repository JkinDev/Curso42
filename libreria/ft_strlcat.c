/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:46:38 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/02 19:28:09 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Size-bounded string concatenation*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	sizedest;
	size_t	sizesrc;
	size_t	ret;

	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	if (size < sizedest)
		ret = sizesrc + size;
	else
		ret = sizesrc + sizedest;
	i = 0;
	while (src[i] != '\0' && sizedest + i + 1 < size)
	{
		dest[sizedest + i] = src[i];
		i++;
	}
	dest[sizedest + i] = '\0';
	return (ret);
}

// int main()
// {
// 	char str1[] = "Holabuenas tardes";
// 	char str2[] = "Adios buenas noches";

// 	printf("%zu", ft_strlcat(str1, str2, 15));
// 	return(0);
// }

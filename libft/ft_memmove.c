/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:40:35 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/26 12:12:23 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies n characters from src to dest, handling overlappin memory correctly.
Memmove is a safer approach than memcpy*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*pointer_to_dest;
	const unsigned char	*pointer_to_src;

	i = 0;
	pointer_to_dest = dest;
	pointer_to_src = src;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n > 0)
		{
			pointer_to_dest[n - 1] = pointer_to_src[n - 1];
			n--;
		}
	}
	return (dest);
}

// int main()
// {
// 	char str1[50] = "oldstring";
// 	char str2[50] = "newstring";

// 	printf("Before memmove str1 = %s, str2 = %s\n", str1, str2);
// 	ft_memmove(str1, str2, 2);
// 	printf("After memmove str1 = %s, str2 = %s\n", str1, str2);
// 	return(0);
// }

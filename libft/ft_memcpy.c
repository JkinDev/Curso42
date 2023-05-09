/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:21:26 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/22 10:36:30 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies n characters from memory area src to memory area dest*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char src[50] = "Hola 42 piscina";
// 	char dest[50] = "Adiooooos";

// 	printf("Before memcpy dest = %s\n", dest);
// 	ft_memcpy(dest, src, 7);
// 	printf("After memcpy dest = %s\n", dest);
// 	return(0);
// }

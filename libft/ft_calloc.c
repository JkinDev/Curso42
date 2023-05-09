/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:43:46 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/28 13:24:53 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function allocates the requested memory and returns a pointer to it.
The difference in malloc and calloc is that malloc does not set the memory to
zero where as calloc sets allocated memory to zero*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total;

	total = count * size;
	p = malloc(total);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}

// int main()
// {
// 	printf("%s", ft_calloc(10, 12));
// }

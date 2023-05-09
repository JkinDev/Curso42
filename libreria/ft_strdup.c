/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:59:53 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/27 17:49:57 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function is used to duplicate a string a copy of source is created
dynamically and pointer to copy is returned.*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = ft_strlen(s1);
	s2 = malloc(i + 1);
	if (!(s2))
		return (NULL);
	ft_memcpy(s2, s1, i);
	s2[i] = '\0';
	return (s2);
}

// int main()
// {
// 	char s1[] = "adios";

// 	printf("%s\n", ft_strdup(s1));
// 	printf("%s", strdup(s1));

// 	return(0);
// }

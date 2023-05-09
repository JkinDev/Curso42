/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:52:40 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/21 18:32:09 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compare two strings, up to a given lenght*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str1[] = "artesano";
// 	char str2[] = "artista";

// 	printf("%i", ft_strncmp(str1, str2, 2));

// 	return(0);
// }

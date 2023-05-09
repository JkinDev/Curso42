/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:05:29 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/26 12:53:53 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Find the last occurrence of a character in a string*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

// int main()
// {
// 	char str[] = "telefonica";

// 	printf("%s", ft_strrchr(str, 'e'));
// 	return(0);
// }

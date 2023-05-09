/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:55:26 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/04 10:36:15 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function reserve in memory with malloc and return a substring, this
string have a start and length.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
	len = ft_strlen(s + start);
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}

// int	main(void)
// {
// 	printf("%s", ft_substr("hola buenas tardes", 4, 5));
// 	return (0);
// }

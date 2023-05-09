/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:42:52 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/28 11:48:04 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function reserve in memory a new string with s1 and s2.
Combines two strings into one string*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str_len;
	char	*str;

	str_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(str_len);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, str_len);
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_strjoin("hola", "mundo"));
// }

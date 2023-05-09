/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:52:47 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/03 15:32:21 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Trim beginning and end of string with specified substring*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!set || !s1)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (j >= 0 && ft_strchr(set, s1[j]))
		j--;
	result = ft_substr(s1, i, j - i + 1);
	return (result);
}

// int	main(void)
// {
// 	char	*s1 = "sacos";
// 	char	*set = "s";

// 	printf("%s", ft_strtrim(s1, set));
// 	return(0);
// }

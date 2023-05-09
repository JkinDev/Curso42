/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:28:05 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/04 12:05:04 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function applies the function f to each character in the string s.
The function returns a new string containing the characters resulting
from the application of the function f to each character in the string s.*/

#include "libft.h"

// char	to_uppercase(unsigned int i, char c)
// {
// 	return (ft_toupper(c));
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (0);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	char *original = "hola mundo";

// 	printf("%s", ft_strmapi(original, to_uppercase));
// }

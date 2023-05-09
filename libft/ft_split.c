/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:39:49 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/03 09:39:06 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reserve using malloc an array of substrings resulting from separating the
string using the character c as delimiter.
The array must be end with null pointer.*/

#include "libft.h"

static	size_t	word_counter(const char *str, char c)
{
	size_t	i;
	size_t	counterword;

	i = 0;
	counterword = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i] != '\0')
			i++;
		else
		{
			counterword++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	return (counterword);
}

char	**ft_split(char const *s, char c)
{
	char	**malaga;
	size_t	len;
	size_t	i;

	malaga = malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!malaga)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = 0;
			while (*s != '\0' && *s != c)
			{
				len++;
				s++;
			}
			malaga[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	malaga[i] = 0;
	return (malaga);
}

// int	main(void)
// {
	// char	**palabras;
	// int		i;

	// palabras = ft_split("Hola mundo como estas?", ' ');
	// i = 0;
	// while (palabras[i])
	// {
	//	printf("%s ", palabras[i]);
	//	i++;
	// }
	// printf("\n");
	// return (0);
// 	char c;
// 	int x;

// 	char s[] = "hola,,,,que,tal,como,estas,adios";

// 	c = ',';
// 	x = 0;

// 	while(x <= word_counter(s, c))
// 	{
// 		printf("%s\n", ft_split(s,c)[x]);
// 		x++;
// 	}
// 	printf("%zu", word_counter(s, c));
// 	return(0);
// }

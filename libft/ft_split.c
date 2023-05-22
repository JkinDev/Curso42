/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:39:49 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/10 12:10:38 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reserve using malloc an array of substrings resulting from separating the
string using the character c as delimiter.
The array must be end with null pointer.*/

#include "libft.h"

// static	size_t	word_counter(const char *str, char c)
// {
// 	size_t	i;
// 	size_t	counterword;

// 	i = 0;
// 	counterword = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == c && str[i] != '\0')
// 			i++;
// 		else
// 		{
// 			counterword++;
// 			while (str[i] != c && str[i] != '\0')
// 				i++;
// 		}
// 	}
// 	return (counterword);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**malaga;
// 	size_t	len;
// 	size_t	i;

// 	malaga = malloc(sizeof(char *) * (word_counter(s, c) + 1));
// 	if (!malaga)
// 		return (NULL);
// 	i = 0;
// 	while (*s != '\0')
// 	{
// 		if (*s != c)
// 		{
// 			len = 0;
// 			while (*s != '\0' && *s != c)
// 			{
// 				len++;
// 				s++;
// 			}
// 			malaga[i++] = ft_substr(s - len, 0, len);
// 		}
// 		else
// 			s++;
// 	}
// 	malaga[i] = 0;
// 	return (malaga);
// }

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

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (NULL);
}

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2[word])
			return (free_array(s2, word));
		ft_putword(s2[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = NULL;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_words;

	if (!s)
		return (NULL);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (NULL);
	s2 = ft_split_words(s, c, s2, num_words);
	if (!s2)
		return (NULL);
	return (s2);
}

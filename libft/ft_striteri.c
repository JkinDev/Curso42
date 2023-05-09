/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:59:30 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/04 12:51:11 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function applies the function f to each character in the string s,
whitout creating a new string.*/

#include "libft.h"

// void	to_lowcase_void(unsigned int i, char *c)
// {
// 	if (*c >= 65 && *c <= 90)
// 		*c += 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char    original[] = "HOLA MUNDO";
//     ft_striteri(original, to_lowcase_void);
//     printf("%s", original);
//     return (0);
// }

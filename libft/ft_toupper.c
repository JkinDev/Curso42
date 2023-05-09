/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:06:30 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/26 12:25:02 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convert a character to uppercase*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'a';

// 	printf("%c", ft_toupper(c));
// 	return(0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:10:50 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/21 19:08:59 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convert a character to lowercase*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'A';

// 	printf("%c", ft_tolower(c));
// 	return(0);
// }

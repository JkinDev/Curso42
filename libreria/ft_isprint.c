/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:21:31 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/21 11:58:55 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Test a character to see if it´s any printable character, including a space*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%i", ft_isprint('n'));
// 	return (0);
// }

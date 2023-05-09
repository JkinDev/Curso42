/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:21:37 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/21 11:32:30 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Test a character to see if it´s a 7-bit ASCII character*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	var1;

// 	var1 = 'n';
// 	printf("%i", ft_isascii(var1));
// 	return (0);
// }

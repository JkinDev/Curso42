/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:21:41 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/21 11:14:35 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Test a character to see if it´s alphabetic*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	variable1;
// 	int	variable2;

// 	variable1 = 'a';
// 	variable2 = '2';
// 	printf("%i", ft_isalpha(variable2));
// 	return (0);
// }

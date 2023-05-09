/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:21:34 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/21 11:14:21 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Test a character to see if it´s a decimal digit*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	variable1;
// 	int	variable2;

// 	variable1 = '9';
// 	variable2 = 'c';
// 	printf("%i", ft_isdigit(variable1));
// }

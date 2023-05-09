/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:21:44 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/04/21 11:17:40 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Test a character to see if it´s alphanumeric*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	var1;

// 	var1 = '.';
// 	printf("%i", ft_isalnum(var1));
// 	return (0);
// }

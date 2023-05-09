/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:48:58 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/04 11:07:44 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convert integer to ASCII string*/

#include "libft.h"

static int	ft_negative(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static size_t	ft_number_len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	pos;
	size_t	digt;

	digt = ft_number_len(n);
	res = ft_calloc(digt + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	pos = digt - 1;
	while (n != 0)
	{
		res[pos] = ft_negative(n % 10) + '0';
		n = n / 10;
		pos--;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(123456));
// }

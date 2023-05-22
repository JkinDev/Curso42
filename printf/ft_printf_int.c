/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:09:01 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/12 11:47:48 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**/

#include "ft_printf.h"

void	ft_printf_int(int nb, int *i)
{
	long long	nbr;

	nbr = (long long)nb;
	if (nbr < 0)
	{
		ft_printf_char('-', i);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_printf_int(nbr / 10, i);
		nbr %= 10;
	}
	ft_printf_char(nbr + '0', i);
}

int main()
{
	int i = 0;
	int num = 12345;

	ft_printf_int(num, &i);
}

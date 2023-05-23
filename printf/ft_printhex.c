/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:15:04 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/23 19:19:21 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_nhex(unsigned long long n)
{
	size_t	size;

	size = 0;
	if (n < 0)
		n *= -1;
	if (n > 15)
	{
		while (n != 0)
		{
			size++;
			n /= 16;
		}
	}
	else
		size++;
	return (size);
}

int	ft_printhex(unsigned int n, char type)
{
	char	*base;
	long	num;

	num = n;
	if (type == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num > 15)
	{
		ft_printhex(num / 16, type);
		num %= 16;
	}
	write(1, &base[num], 1);
	return (count_nhex(n));
}

// void recursiv_ptr(unsigned long long nbr, char *base)
// {
// 	if (nbr > 15)
// 	{
// 		recursiv_ptr(nbr / 16, base);
// 		nbr %= 16;
// 	}
// 	write(1, &base[nbr], 1);
// }

int	ft_putptr(unsigned long long n)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "0x", 2);
	ft_printhex(n, *base);
	return (count_nhex(n) + 2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:33:44 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/23 12:05:22 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	cont_num(long n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	if (n > 9)
	{
		size++;
		n /= 10;
	}
	if (n <= 9)
		size++;
	return (size);
}

int	ft_putnbr(int n)
{
	long	num;

	num = n;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		num %= 10;
	}
	num += '0';
	write(1, &num, 1);
	return (cont_num(n));
}

int	ft_putunbr(unsigned int n)
{
	long	num;

	num = n;
	if (num > 9)
	{
		ft_putnbr(num / 10);
		num %= 10;
	}
	num += '0';
	write(1, &num, 1);
	return (cont_num(n));
}

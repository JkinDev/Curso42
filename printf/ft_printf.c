/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:27:22 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/23 16:17:05 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_controler(va_list args, char type)
{
	int	contador;

	contador = 0;
	if (type == '%')
		contador += ft_writesimbol();
	else if (type == 'c')
		contador += ft_putchar(va_arg(args, int));
	else if (type == 's')
		contador += ft_putstr(va_arg(args, char *));
	else if (type == 'i' || type == 'd')
		contador += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		contador += ft_putunbr(va_arg(args, unsigned int));
	return (contador);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		total;
	va_list	args;

	va_start(args, str);
	i = 0;
	total = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			total += ft_controler(args, str[i]);
		}
		else
			total += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (total);
}

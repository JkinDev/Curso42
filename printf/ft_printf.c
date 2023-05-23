/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:27:22 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/22 22:20:26 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_controler(va_list arg, char type)
{
	int	contador;

	contador = 0;
	if (type == '%')
		total += ft_writesimbol();
	else if (type == 'c')
		total += ft_putchar(va arg(args, int));
	else if (type == 's')
		total += ft_putstr(va arg(args, char *));
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		total;
	va_list	args;

	va_start(arg, str);
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
}

testando

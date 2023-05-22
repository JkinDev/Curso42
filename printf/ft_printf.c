/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:27:22 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/22 19:30:55 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_controler(va_list arg, char type)
{
	int total;

	total = 0;
	if (type == 'c')
		total += ft_printf_char(va arg(arg, int));
}

int	ft_printf(char const *str, ...)
{

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:51:39 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/10 16:46:48 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Esta función sirve para imprimir caracteres*/

void	ft_printf_char(char c, int *i)
{
	write(1, &c, 1);
	*i += 1;
}

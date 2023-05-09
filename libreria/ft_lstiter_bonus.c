/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:46:16 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/09 14:50:58 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterate the list 'lst and apply the function 'f' on the content of each node*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

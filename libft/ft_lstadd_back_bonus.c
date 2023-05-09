/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:27:24 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/09 15:26:38 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Add a new node in the end of 'lst'*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastadd;

	if (*lst)
	{
		lastadd = ft_lstlast(*lst);
		lastadd->next = new;
	}
	else
		*lst = new;
}

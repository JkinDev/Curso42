/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:51:19 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/10 12:09:30 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterate the list 'lst' and apply the function 'f' to the content of each node.
It creates a list resulting from the correct and successie application of the
function 'f' on each node. The function 'del' is used to remove the contents of
a node, if necessary.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*resl;
	t_list	*first;

	if (!lst)
		return (NULL);
	first = malloc(sizeof(t_list));
	if (!first)
		return (NULL);
	resl = first;
	resl->content = f(lst->content);
	while (lst->next)
	{
		lst = lst->next;
		resl->next = malloc(sizeof(t_list));
		if (!resl->next)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		resl->next->content = f(lst->content);
		resl = resl->next;
	}
	resl->next = NULL;
	return (first);
}

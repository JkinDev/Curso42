/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:51:19 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/09 15:01:34 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterate the list 'lst' and apply the function 'f' to the content of each node.
It creates a list resulting from the correct and successie application of the
function 'f' on each node. The function 'del' is used to remove the contents of
a node, if necessary.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp);
		lst = lst->next;
	}
	return (new_list);
}

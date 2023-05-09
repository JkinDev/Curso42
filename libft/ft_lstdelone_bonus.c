/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:30:05 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/09 12:37:43 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*It takes a paramater a node 'lst' and frees the memory of the content using
the function 'del' given as parameter, in addition to freeing the node.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:22:19 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/05/05 16:48:09 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a node with malloc, init variable "content" with content and the
variable next with null*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*i;

	i = malloc(sizeof(t_list));
	if (!i)
		return (NULL);
	i->content = content;
	i->next = NULL;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:57:08 by sounania          #+#    #+#             */
/*   Updated: 2025/05/29 20:28:27 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next_node;

	tmp = *lst;
	if (!lst || !del)
		return ;
	while (tmp)
	{
		next_node = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = next_node;
	}
	*lst = NULL;
}

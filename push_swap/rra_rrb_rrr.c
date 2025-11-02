/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:41:55 by sounania          #+#    #+#             */
/*   Updated: 2025/11/02 17:42:05 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack_node **a, bool print)
{
	t_stack_node	*a1;
	t_stack_node	*tmp;

	if (ft_lstsize(*a) < 2)
		return ;
	a1 = *a;
	tmp = *a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = a1;
	*a = tmp->next;
	tmp->next = NULL;
	if (!print)
		write(1, "rra\n", 4);
}

void	rrb(t_stack_node **b, bool print)
{
	t_stack_node	*b1;
	t_stack_node	*tmp;

	if (ft_lstsize(*b) < 2)
		return ;
	b1 = *b;
	tmp = *b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = b1;
	*b = tmp->next;
	tmp->next = NULL;
	if (!print)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	rra(a, true);
	rrb(b, true);
	write(1, "rrr\n", 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:39:57 by sounania          #+#    #+#             */
/*   Updated: 2025/11/02 17:53:51 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack_node **a, bool print)
{
	t_stack_node	*a1;
	t_stack_node	*tmp;

	if (ft_lstsize(*a) < 2)
		return ;
	a1 = *a;
	tmp = (*a)->next;
	a1->next = tmp->next;
	tmp->next = a1;
	*a = tmp;
	if (!print)
		write(1, "sa\n", 3);
}

void	sb(t_stack_node **b, bool print)
{
	t_stack_node	*b1;
	t_stack_node	*tmp;

	if (ft_lstsize(*b) < 2)
		return ;
	b1 = *b;
	tmp = (*b)->next;
	b1->next = tmp->next;
	tmp->next = b1;
	*b = tmp;
	if (!print)
		write(1, "sb\n", 3);
}

void	ss(t_stack_node **a, t_stack_node **b)
{
	sa(a, true);
	sb(b, true);
	write(1, "ss\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:39:39 by sounania          #+#    #+#             */
/*   Updated: 2025/11/02 17:53:46 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack_node **a)
{
	t_stack_node	*a1;
	t_stack_node	*tmp;

	if (ft_lstsize(*a) < 2)
		return ;
	a1 = *a;
	tmp = *a;
	while (tmp->next)
		tmp = tmp->next;
	*a = a1->next;
	a1->next = NULL;
	tmp->next = a1;
	write(1, "ra\n", 3);
}

void	rb(t_stack_node **b)
{
	t_stack_node	*b1;
	t_stack_node	*b2;

	if (ft_lstsize(*b) < 2)
		return ;
	b1 = *b;
	b2 = *b;
	while (b2->next)
		b2 = b2->next;
	*b = b1->next;
	b1->next = NULL;
	b2->next = b1;
	write(1, "rb\n", 3);
}

void	rr(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*a1;
	t_stack_node	*tmp;

	if (ft_lstsize(*a) >= 2)
	{
		a1 = *a;
		tmp = *a;
		while (tmp->next)
			tmp = tmp->next;
		*a = a1->next;
		a1->next = NULL;
		tmp->next = a1;
	}
	if (ft_lstsize(*b) >= 2)
	{
		a1 = *b;
		tmp = *b;
		while (tmp->next)
			tmp = tmp->next;
		*b = a1->next;
		a1->next = NULL;
		tmp->next = a1;
	}
	write(1, "rr\n", 3);
}

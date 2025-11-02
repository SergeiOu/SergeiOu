/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:38:27 by sounania          #+#    #+#             */
/*   Updated: 2025/11/02 17:53:42 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	handle_five(t_stack_node **a, t_stack_node **b)
{
	if (ft_lstsize(*a) == 2)
		sa(a, false);
	else if (ft_lstsize(*a) == 3)
		sort_three(a);
	else if (ft_lstsize(*a) == 4)
		sort_four(a, b);
	else if (ft_lstsize(*a) == 5)
		sort_five(a, b);
	free_stack(a);
	return ;
}

void	move_to_b(t_stack_node **a, t_stack_node **b, int x, int i)
{
	t_stack_node	*tmp;

	if (ft_lstsize(*a) <= 5)
		handle_five(a, b);
	else if (ft_lstsize(*a) <= 100)
		x = 16;
	else
		x = 36;
	while (*a)
	{
		tmp = *a;
		if (tmp->index <= i)
		{
			pb(b, a);
			i++;
		}
		else if (tmp->index <= i + x)
		{
			pb(b, a);
			rb(b);
			i++;
		}
		else
			ra(a);
	}
}

void	move_back_to_a(t_stack_node **a, t_stack_node **b, int size_of_stack)
{
	int	max_node_position;

	size_of_stack = ft_lstsize(*b);
	while (size_of_stack)
	{
		set_position(*b);
		max_node_position = max_node_positon(*b);
		if (max_node_position < size_of_stack / 2)
		{
			while ((*b)->position_in_stack != max_node_position)
				rb(b);
		}
		else
		{
			while ((*b)->position_in_stack != max_node_position)
				rrb(b, false);
		}
		pa(a, b);
		size_of_stack--;
	}
}

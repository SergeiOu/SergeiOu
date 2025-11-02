/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:38:56 by sounania          #+#    #+#             */
/*   Updated: 2025/11/02 17:39:28 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack_node
{
	int					value;
	int					index;
	int					position_in_stack;
	struct s_stack_node	*next;
}						t_stack_node;

char			**split(char *s, char c);
t_stack_node	*lst_last(t_stack_node *head);
int				ft_lstsize(t_stack_node *head);
void			ft_lstadd_back(t_stack_node **stack, t_stack_node *new);
t_stack_node	*ft_lstnew(int value, int index);
int				stack_not_sorted(t_stack_node **stack);
void			set_position(t_stack_node *stack);
int				max_node_positon(t_stack_node *stack);
t_stack_node	*get_max(t_stack_node *stack);
t_stack_node	*get_min(t_stack_node *stack);
void			sort_five(t_stack_node **a, t_stack_node **b);
void			sort_three(t_stack_node **a);
void			sort_four(t_stack_node **a, t_stack_node **b);
void			move_back_to_a(t_stack_node **a, t_stack_node **b, int size);
void			move_to_b(t_stack_node **a, t_stack_node **b, int x, int i);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **b, t_stack_node **a);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);
void			rrb(t_stack_node **b, bool print);
void			rra(t_stack_node **a, bool print);
void			ss(t_stack_node **a, t_stack_node **b);
void			sb(t_stack_node **b, bool print);
void			sa(t_stack_node **a, bool print);
void			ft_free_errors(t_stack_node **stack);
void			free_stack(t_stack_node **stack);
int				duplicate_error(t_stack_node *a, int n);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:08:04 by sergei            #+#    #+#             */
/*   Updated: 2025/08/28 10:27:18 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	topa;
	int	topb;
	int	size;
}	t_stacks;

void	sa(int *a, int topa);
void	sb(int *b, int topb);
void	ss(int *a, int topa, int *b, int topb);
void	pa(int *a, int *topa, int *b, int *topb);
void	pb(int *a, int *topa, int *b, int *topb);
void	ra(int *a, int topa);
void	rb(int *b, int topb);
void	rr(int *a, int topa, int *b, int topb);
void	rra(int *a, int topa);
void	rrb(int *b, int topb);
void	rrr(int *a, int topa, int *b, int topb);
int		is_sorted(int *a, int topa);
int		ft_atoi(const char *str, int *error);
int		skip_whitespace(const char **str);
int		handle_sign(const char **str);
int		check_digit(char c, int *error);
int		check_overflow(long res, int digit, int *error);
int		check_duplicate(int *arr, int size);
void	error_exit(void);
void	radix_sort(t_stacks *s);
void	swap(int *x, int *y);
void	ra_op(int *a, int topa);
void	rb_op(int *b, int topb);
void	rra_op(int *a, int topa);
void	rrb_op(int *b, int topb);
	
#endif
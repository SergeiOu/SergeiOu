/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:08:04 by sergei            #+#    #+#             */
/*   Updated: 2025/08/27 20:34:29 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
    int *a;
    int size;
}   t_stack;

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
int		check_duplicate(int *arr, int size);
void	error_exit(void);
void	radix_sort(int *a, int *b, int *topa, int *topb, int size);

# endif
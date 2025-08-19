/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:15:00 by sounania          #+#    #+#             */
/*   Updated: 2025/08/11 17:13:01 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void sa(char *a, int topa)
{
    int temp;

    temp = 0;
    if (topa >= 1)
    {
       temp = a[topa];
       a[topa] = a[topa - 1];
       a[topa - 1] = temp; 
    }
    write (1, "sa\n", 3);
}
void sb(char *b, int topb)
{
    int temp;

    temp = 0;
    if (topb >= 1)
    {
       temp = b[topb];
       b[topb] = b[topb - 1];
       b[topb - 1] = temp; 
    }
    write (1, "sb\n", 3);
}

void ss(char *a, int topa, char *b, int topb)
{
    sa(a,topa);
    sb(b,topb);
}

void pa(char *a, int *topa, char *b, int *topb)
{
    if (*topb != -1)
    {
        a[++(*topa)] = b[*topb];
        (*topb)--;
    }
    write (1, "pa\n", 3);
}

void pb(char *a, int *topa, char *b, int *topb)
{
    if (*topa != -1)
    {
        b[++(*topb)] = a[*topa];
        (*topa)--;
    }
    write (1, "pb\n", 3);
}

void ra(char *a, int topa)
{
    int     i;
    char    temp;

    i = 0;
    temp = a[0];
    if (topa < 1)
        return;
    while(i < topa)
    {
        a[i] = a[i + 1];
        i++;
    }
    a[topa] = temp;
}

void rb(char *b, int topb)
{
    int     i;
    char    temp;

    i = 0;
    temp = b[0];
    if (topb < 1)
        return;
    while(i < topb)
    {
        b[i] = b[i + 1];
        i++;
    }
    b[topb] = temp;
}

void rr(char *a, int topa, char *b, int topb)
{
    ra(a, topa);
    rb(b, topb);
}

void rra(char *a, int topa)
{
    int     i;
    char    temp;

    i = topa;
    temp = a[topa];
    if (topa < 1)
        return;
    while(i > 0)
    {
        a[i] = a[i - 1];
        i--;
    }
    a[0] = temp;
}

void rrb(char *b, int topb)
{
    int     i;
    char    temp;

    i = topb;
    temp = b[topb];
    if (topb < 1)
        return;
    while(i > 0)
    {
        b[i] = b[i - 1];
        i--;
    }
    b[0] = temp;
}

void rrr(char *a, int topa, char *b, int topb)
{
    rra(a, topa);
    rrb(b, topb);
}
// #include <stdio.h>

// int main(void)
// {
//     char a[10] = {'0', '1', '2', '3', '4', '5'};
//     char b[10] = {'0', '1', '2', '3', '4', '5'};
//     int topa = 5;
//     int topb = 5;
//     int i = 0;
//     int j = 0;
    
//     ss(a, topa, b, topb);
//     // sa(a, topa);
//     while (i <= topa)
//     {
//         printf("%c", a[i]);
//         i++;
//     }
//     // sb(b, topb);
//     while (j <= topb)
//     {
//         printf("%c", b[j]);
//         j++;
//     }
//     return (0);
// }
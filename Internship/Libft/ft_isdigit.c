/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:26:48 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:18:58 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isdigit(int s)
{
	return (s >= '0' && s <= '9');
}

// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('3'));
// 	printf("%d\n", ft_isdigit('A'));
// 	return (0);
// }
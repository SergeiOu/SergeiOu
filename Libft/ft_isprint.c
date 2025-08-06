/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:13:34 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:18:54 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isprint(int s)
{
	return (s >= 32 && s <= 126);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint(31));
// 	return (0);
// }
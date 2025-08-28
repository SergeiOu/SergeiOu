/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:02:06 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:19:02 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isascii(int s)
{
	return (s >= 0 && s <= 127);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isascii('A'));
// 	printf("%d\n", ft_isascii(200));
// 	return (0);
// }
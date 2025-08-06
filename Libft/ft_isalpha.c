/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:11:58 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:19:06 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isalpha(int s)
{
	return ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'));
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('a')); 
// 	printf("%d\n", ft_isalpha('Z')); 
// 	printf("%d\n", ft_isalpha('5'));
// 	return (0);
// }
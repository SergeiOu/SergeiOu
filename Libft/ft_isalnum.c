/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:51:34 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:19:10 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isalnum(int s)
{
	return (ft_isalpha(s) || ft_isdigit(s));
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('9'));
// 	printf("%d\n", ft_isalnum('$'));
// 	return (0);
// }
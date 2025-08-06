/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:32:31 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:12:26 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_toupper(int s)
{
	if (s >= 'a' && s <= 'z')
	{
		return (s - 32);
	}
	return (s);
}

// int main(void)
// {
//     printf("%c\n", ft_toupper('a'));
// }
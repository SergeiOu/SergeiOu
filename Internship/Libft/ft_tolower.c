/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:37:07 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:12:23 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_tolower(int s)
{
	if (s >= 'A' && s <= 'Z')
	{
		return (s + 32);
	}
	return (s);
}

// int main(void)
// {
//     printf("%c\n", ft_tolower('A'));
// }
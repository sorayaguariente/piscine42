/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:08:23 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/08 18:14:10 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d -> %d\n", -23, ft_is_prime(-23));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 13, ft_is_prime(13));
	printf("%d -> %d\n", 223, ft_is_prime(223));
	printf("%d -> %d\n", 45623, ft_is_prime(45623));
	printf("%d -> %d\n", 45624, ft_is_prime(45624));
	printf("%d -> %d\n", 45625, ft_is_prime(45625));
}

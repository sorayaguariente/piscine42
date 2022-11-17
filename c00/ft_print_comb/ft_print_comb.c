/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:05:57 by sguarien          #+#    #+#             */
/*   Updated: 2022/09/26 17:54:39 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_numb(char first, char second, char third)
{
	if (first < second && second < third)
	{
		write (1, &first, 1);
		write (1, &second, 1);
		write (1, &third, 1);
		if (first != '7')
			write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '9')
	{
		second = first + 1;
		while (second <= '9')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_write_numb (first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:57:38 by sguarien          #+#    #+#             */
/*   Updated: 2022/09/26 18:19:16 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	leftnumbers;
	int	rightnumbers;

	leftnumbers = 0;
	while (leftnumbers <= 98)
	{
		rightnumbers = leftnumbers + 1;
		while (rightnumbers <= 99)
		{
			ft_putchar (48 + leftnumbers / 10);
			ft_putchar (48 + leftnumbers % 10);
			ft_putchar (' ');
			ft_putchar (48 + rightnumbers / 10);
			ft_putchar (48 + rightnumbers % 10);
			if (!(leftnumbers == 98 && rightnumbers == 99))
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			rightnumbers++;
		}
		leftnumbers++;
	}
}

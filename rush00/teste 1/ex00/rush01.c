/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:19:16 by sguarien          #+#    #+#             */
/*   Updated: 2022/09/25 16:04:28 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_line(char a, char b, char c, char size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i == 0)
			ft_putchar(a);
		else if (i == size - 1)
			ft_putchar(c);
		else
			ft_putchar(b);
		i++;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 0 || y < 0)
		return ;
	i = 0;
	while (i < y)
	{
		j = 0;
		if (i == 0)
			write_line('/', '*', '\\', x);
		else if (i == y - 1)
			write_line ('\\', '*', '/', x);
		else
			write_line ('*', ' ', '*', x);
		i++;
	}
}

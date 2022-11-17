/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraquel- <jraquel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:23:25 by jraquel-          #+#    #+#             */
/*   Updated: 2022/09/25 14:23:45 by jraquel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*
** a = start symbol
** b = space symbol
** c = final symbol
** size = length of line
*/

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

/*
**	x = Length of line
**	y = Lines count
*/

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
		if (i == 0 || i == y - 1)
			write_line('A', 'B', 'C', x);
		else
			write_line('B', ' ', 'B', x);
		i++;
	}
}

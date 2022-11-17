/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:48:57 by amitcul           #+#    #+#             */
/*   Updated: 2022/09/25 14:10:35 by amitcul          ###   ########.fr       */
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
{ // this function whitch was called from the function rush will deal with the length of line
	int	i;

	i = 0; // the first positon of the line is 0
	while (i < size) //while the position is smaller than the length of the line
	{
		if (i == 0) // if the position is 0, it will write the first character - o
			ft_putchar(a);
		else if (i == size - 1) // if the position is equall the lenght of line (remembering that starts with 0)
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

void	rush(int x, int y) // this function will beggin dealling with the numbers of lines,  and depending the number of lines, will print different characters:
{
	int	i; //character position
	int	j; // line posiion

	if (x < 0 || y < 0)
		return ;
	i = 0;
	while (i < y) // while the character position is smaller then the line position, the line position will be 0 and will enter in another condition
	{
		j = 0;
		if (i == 0 || i == y - 1) // if the i == to 0 or equal the line position, you will send the characters 0 - 0 and the x, with is the line size
			write_line('o', '-', 'o', x);
		else // if the i isn't in the first position or in the last, it will send other charachters: | |.
			write_line('|', ' ', '|', x);
		i++;
	}
}

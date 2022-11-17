/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 00:12:19 by sguarien          #+#    #+#             */
/*   Updated: 2022/09/30 00:26:58 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	index;

	index = 0;
	while (index < size)
	{
		if (tab[index] > tab[index + 1])
		{
			swap = tab[index];
			tab [index] = tab[index + 1];
			tab [index + 1] = swap;
			index = 0;
		}
		else
			index++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:49:59 by sguarien          #+#    #+#             */
/*   Updated: 2022/09/27 15:03:47 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbunsigned;

	if (nb < 0)
	{
		nbunsigned = nb * (-1);
		ft_putchar ('-');
	}
	else
		nbunsigned = nb;
	if (nbunsigned >= 10)
	{
		ft_putnbr (nbunsigned / 10);
	}
	ft_putchar ((nbunsigned % 10) + 48);
}

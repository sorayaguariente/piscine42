/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:49:04 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/08 14:54:16 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main (void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(43, "lula");
        printf("\n");
	ft_putnbr_base(4561237, "0123456789");
        printf("\n");
	ft_putnbr_base(13, "0123456789abcdef");
        printf("\n");
}

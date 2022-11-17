/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:02:35 by sguarien          #+#    #+#             */
/*   Updated: 2022/09/29 20:06:19 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(void);

int     main(void)
{
        int     *a;
        int     *b;

        *a = 10;
        *b = 3;
        printf("Valor de  eh %d", *a);
        printf("Valor de y %d", *b);
        ft_swap(a, b);
        printf("Depois da troca o valor de x eh %d",*a);
        printf("e o valor de y %d", *b);
}


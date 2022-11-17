/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:06:32 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/03 18:08:56 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
    char    *ft_strcpy(char *dest, char *src);
    char    string_origem[] = "Bolsonaro Lixo";
    char    string_destino[] = "Lula Presidente";
    char    *dest;
    printf("Antes strcpy \n");
    printf("string_origem: %s \nstring_destino: %s \n",string_origem, string_destino);
    dest = ft_strcpy(string_origem, string_destino);
    printf("\nDepois strcpy \n");
    printf("string_destino: %s \n", dest);
}

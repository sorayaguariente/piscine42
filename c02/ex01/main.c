/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:20:55 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/03 18:59:38 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char src[] = "Lula";
	char dest[] = "131313";

	printf("%s", ft_strncpy(dest, src, 3));
	printf("\n%s", strncpy(dest, src, 3));
	printf("\n%s", ft_strncpy(dest, src, 5));
	printf("\n%s", strncpy(dest, src, 5));
	printf("\n%s", ft_strncpy(dest,src, 2));
	printf("\n%s", strncpy(dest, src, 2));
}

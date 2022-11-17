/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 01:36:22 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/05 01:39:15 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	unsigned int	size;
	size = 20;
	char src[] = "131313";
	char dest[] = "lula";
	printf("%d o dest passa a ser %s\n", ft_strlcpy(dest,src,size), dest);
}

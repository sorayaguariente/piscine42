/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:40:24 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/10 16:47:18 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;
	char	*alloc;

	str ="Lula presidente()";
	printf("original :$%s$ @  %p\n", str, str);
	alloc = ft_strdup(str);
	printf("copied :$%s$ @  %p", alloc, alloc);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:31:43 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/03 23:33:22 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
	printf("%d", ft_str_is_lowercase("abcdefghijkl"));
       	printf("\n%d", ft_str_is_lowercase("abc1defghijkl"));
	printf("\n%d", ft_str_is_lowercase("-_134556efghij67"));
}

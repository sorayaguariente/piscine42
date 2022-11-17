/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:25:11 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/04 14:40:10 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main()
{
	printf("%d", ft_str_is_printable("esfmofeijr09556yg13>>"));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}

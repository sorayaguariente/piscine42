/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:37:24 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/03 23:38:44 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main()
{
	printf("%d", ft_str_is_uppercase("LULAPRESIDENTE"));
       	printf("\n%d", ft_str_is_uppercase("abc1defgFRFSDGSl"));
	printf("\n%d", ft_str_is_uppercase("-_134556efghij67"));
}

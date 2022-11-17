/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:46:49 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/12 16:53:41 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h> */

int	ft_atoi(char *s)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	while (s[i] == 43 || s[i] == 45)
	{
		if (s[i] == 45)
			sign *= -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		result *= 10;
		result += s[i] - 48;
		i++;
	}	
	return (result * sign);
}
/*
int	main(void)
{
	char	*str = " ---++--+1313Lula";
	printf("%d", ft_atoi(str));
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:20:52 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/10 22:57:09 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;
	int	first;

	i = 0;
	j = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			first = i;
			k = i;
			while (to_find[j] != '\0' && (str[k++] == to_find[j]))
				j++;
			if (to_find[j] == '\0' && (str[k - 1] == to_find[j - 1]))
				return (&((char *)str)[first]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Lula presidente 13";
	char	find[] = "presidente";

	printf("%s", str);
	printf("\n");
	printf("%s", ft_strstr(str, find));
}
*/

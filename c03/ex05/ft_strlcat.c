/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:43:12 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/10 22:53:18 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*s;
	unsigned int	len_dst;
	unsigned int	res;
	unsigned int	len_src;
	unsigned int	i;

	s = src;
	len_dst = ft_strlen(dest);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (s[i] && (len_dst + 1) < size)
	{
		dest[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dest[len_dst] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Lula Presidente";
	char dest[] = "13 ";
	printf("%i \n", ft_strlcat(dest, src, 31));
	printf("%s \n", dest);
} */

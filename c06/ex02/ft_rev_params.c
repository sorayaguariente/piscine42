/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:02:34 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/08 22:10:33 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_arg(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i])
		{
			ft_write_arg(argv[j][i]);
			i++;
		}
		ft_write_arg('\n');
		j--;
	}
	return (0);
}

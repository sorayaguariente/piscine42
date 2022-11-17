/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:32:43 by sguarien          #+#    #+#             */
/*   Updated: 2022/10/08 21:46:05 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_program(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		ft_write_program(argv[0][i]);
		i++;
	}
	return (0);
}

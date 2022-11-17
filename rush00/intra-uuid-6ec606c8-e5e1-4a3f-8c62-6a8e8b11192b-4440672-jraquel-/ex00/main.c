/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:49:02 by amitcul           #+#    #+#             */
/*   Updated: 2022/09/25 15:50:14 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int	sum;
	int	sign;
	int	found;

	sum = 0;
	sign = 1;
	found = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || \
	*str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && found)
	{
		if (*str >= '0' && *str <= '9')
			sum = sum * 10 + *str - '0';
		else
			found = 0;
		str++;
	}
	return (sign * sum);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	else if (argc == 1)
		rush(3, 5);
	return (0);
}

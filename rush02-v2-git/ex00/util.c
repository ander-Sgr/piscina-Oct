/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:19:12 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/05 14:05:50 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

long int	ft_atoi(char *str)
{
	int			i;
	int			signo;
	long int	numero;

	i = 0;
	signo = 0;
	numero = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signo++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		numero = numero * 10 + (str[i] - '0');
		i++;
	}
	if (signo % 2 != 0)
		numero = -numero;
	return (numero);
}

long int	ft_printnb(long int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 0)
	{
		ft_printnb(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	return (0);
}

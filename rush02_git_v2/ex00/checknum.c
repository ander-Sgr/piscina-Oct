/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checknum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:14:11 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/05 22:28:53 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_printnb(int nb);
int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_find_text(int num_tofinde, char *buffer, int buffer_size, char *text_found);

int	ft_print_digitos(char separador, long int rango, int digito, char *buffer)
{
	char	*res;
	int		buffer_size;

	buffer_size = 400;
	res = (char *)malloc(buffer_size * sizeof(char));

	if (digito != 0)
	{
		if (ft_find_text(digito, buffer, buffer_size, res) == 1)
			ft_putstr(res);
		else
			return (1);
	}
	if (rango == 1000000000 || rango == 1000000 || rango == 1000 || rango == 100)
	{
	//	ft_putchar(' ');
		if (ft_find_text(rango, buffer, 400, res) == 1)
			ft_putstr(res);
		else
			return (1);
		// :ft_putchar(' ');
	}
	ft_putchar(separador);
	return (0);
}

void	ft_llamar_print(long int rango, int divisor, int digito, int triada, char *buffer)
{
	if (divisor == 100)
	{
		if (digito != 0)
			ft_print_digitos(' ', divisor, digito, buffer);
	}
	else
	{
		if (divisor == 10)
		{
			if (digito != 0)
			{
				if (triada > 20)
				{
					ft_print_digitos('\0', 0, digito * 10, buffer);
					ft_putchar(' ');
				}
				else
					ft_print_digitos('\0', 0, digito, buffer);
			}
		}
		else
		{
			if (!(rango == 100 && divisor == 1))
				ft_print_digitos(' ', rango, digito, buffer);
			else
				ft_print_digitos('\n', 0, digito, buffer);
		}
	}
}

int	ft_check_triada(long int rango, int divisor, int triada, char *buffer)
{
	int	divisor_s;
	int	resta;
	int	digito;

	digito = triada / divisor;
	resta = triada % divisor;
	divisor_s = divisor / 10;
	ft_llamar_print(rango, divisor, digito, triada, buffer);
	if (divisor_s >= 1)
		ft_check_triada(rango, divisor_s, resta, buffer);
	return (0);
}

int	ft_check_num(long int divisor, long int num, char *buffer)
{
	long int	divisor_s;
	long int	resta;
	long int	triada;

	triada = num / divisor;
	resta = num % divisor;
	divisor_s = divisor / 1000;
	if (triada != 0)
	{
		if (divisor == 1)
			ft_check_triada(100, 100, triada, buffer);
		else
			ft_check_triada(divisor, 100, triada, buffer);
	}
	if (divisor_s >= 1)
		ft_check_num(divisor_s, resta, buffer);
	return (0);
}

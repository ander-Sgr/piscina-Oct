/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checknum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:14:11 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/05 15:14:50 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_printnb(int nb);
int		ft_putchar(char c);
void	ft_putstr(char *str);

int	ft_print_digitos(char separador, long int rango, int digito)
{
	if (digito != 0)
		ft_printnb(digito);
	if (rango == 1000000000)
		ft_putstr(" billion");
	if (rango == 1000000)
		ft_putstr(" million");
	if (rango == 1000)
		ft_putstr(" thousand");
	if (rango == 100)
		ft_putstr(" hundred");
	ft_putchar(separador);
	return (0);
}

void	ft_llamar_print(long int rango, int divisor, int digito)
{
	if (divisor == 100)
	{
		if (digito != 0)
			ft_print_digitos(' ', divisor, digito);
	}
	else
	{
		if (divisor == 10)
		{
			if (digito != 0)
				ft_print_digitos(' ', 0, digito * 10);
		}
		else
		{
			if (!(rango == 100 && divisor == 1))
				ft_print_digitos(' ', rango, digito);
			else
				ft_print_digitos('\n', 0, digito);
		}
	}
}

int	ft_check_triada(long int rango, int divisor, int triada)
{
	int	divisor_s;
	int	resta;
	int	digito;

	digito = triada / divisor;
	resta = triada % divisor;
	divisor_s = divisor / 10;
	ft_llamar_print(rango, divisor, digito);
	if (divisor_s >= 1)
		ft_check_triada(rango, divisor_s, resta);
	return (0);
}

int	ft_check_num(long int divisor, long int num)
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
			ft_check_triada(100, 100, triada);
		else
			ft_check_triada(divisor, 100, triada);
	}
	if (divisor_s >= 1)
		ft_check_num(divisor_s, resta);
	return (0);
}

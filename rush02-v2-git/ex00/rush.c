/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:35:53 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/05 15:51:14 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_verif_err_num(long int num);
int	ft_verif_err_arg(char *num_str);
int	ft_check_num(long int divisor, long int num);

struct	s_dic
{
	int		numero;
	char	*palabra;
};

int	ft_rush(char *num_str, long int num, char *dic)
{
	int dic;

	dic_ = dic;
	if (ft_verif_err_num(num) != 0 || ft_verif_err_arg(num_str) != 0)
		return (1);
	ft_check_num(1000000000, num, dic);
	return (0);
}

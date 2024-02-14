/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:46:56 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/05 12:06:28 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_verif_err_num(long int num)
{
	if (num < 0)
		return (1);
	return (0);
}

int	ft_verif_err_arg(char *num_str)
{
	int	i;

	i = 0;
	while ((num_str[i] >= 9 && num_str[i] <= 13) || num_str[i] == 32)
		i++;
	if (!(num_str[i] >= 48 && num_str[i] <= 57))
		return (1);
	return (0);
}

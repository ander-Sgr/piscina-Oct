/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:35:53 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/05 21:38:27 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_verif_err_num(long int num);
int	ft_verif_err_arg(char *num_str);
int	ft_check_num(long int divisor, long int num, char *buffer);
int	ft_readfile(char *file_name, char *buffer, int buffer_size);

int	ft_rush(char *num_str, long int num, char *dic_nom)
{
	char	*buffer;
	int		buffer_size;

	buffer_size = 400;
	if (ft_verif_err_num(num) != 0 || ft_verif_err_arg(num_str) != 0)
		return (1);
	//if (ft_open_dic(dic_nom, &dic_all) != 0)
	//	return (2);
	buffer = (char *)malloc(buffer_size * sizeof(char));
	if (ft_readfile(dic_nom, buffer, buffer_size) == 1)
		return (2);
	//text = (char *)malloc(buffer_size * sizeof(char));
	//if (ft_find_text(num_tofind, buffer, buffer_size, text))
	//	ft_print_result(text);
	ft_check_num(1000000000, num, buffer);
	free(buffer);
	//free(text);
	return (0);
}

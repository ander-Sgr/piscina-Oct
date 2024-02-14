/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mau.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maust <maust@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:30:17 by maust             #+#    #+#             */
/*   Updated: 2023/10/29 15:34:49 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "chekers.c"
#include "transform_to_int.c"

int	main(int argc, char **argv)
{
	int general_size;
	int field_length;


	general_size = ft_check_arg(argc, argv);
	field_length = ft_check_num(general_size);
	if (field_length == 0 || general_size ==  0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	int	i;
	int *result;
	result = ft_gen_arr(field_length, argv);
   	i = 0;	
	while ( i < general_size)
	{
		printf("%d!\n", result[i]);
		i++;
	}
	    printf("El tamaño de un entero (int) en este sistema es: %lu bytes\n", sizeof(int));
		

}

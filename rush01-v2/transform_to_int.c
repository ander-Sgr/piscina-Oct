/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_to_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:21:23 by mvallhon          #+#    #+#             */
/*   Updated: 2023/10/29 15:34:23 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int *ft_gen_arr(int	size, char **argv)
{
	int	arr;
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 0;
	arr = 
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')	
		{
			res = 0;
			while (argv[1][i] != ' ' && argv[1][i] != '\0')
			{
				res = (res * 10) + (argv[1][i] - '0');
				i++;
			}
			arr[j] = res;
			j++;
		}
		if (argv[1][i])
			i++;
	}
	return (arr);
}

/*
int	**ft_to_int(int size, char **argv)
{
	int	i;
	int	j;
	int conditions[4][size];

	

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			j++;
		}
		i++;
	}
}*/

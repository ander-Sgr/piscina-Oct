/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:21:41 by aestrell          #+#    #+#             */
/*   Updated: 2023/10/28 14:52:25 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_num(int count, int *args)
{
	int	i;
	int	j;
	int	result;
	
	result = 0;
	i = 0;
	j = 0;
	while (i * i <= count)
	{
		if (i * i == count)
			result = i;
		i++;
	}
	while (args[j] != '\0')
	{
		if ((args[j]  - '0') == 0 && (args[j]  - '0') >  result && (args[i] <= '9' && args[i] >= '0'))
			result = 0;
		j++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	i;
	int total_size;
	int	field_size;

	i = 0;
	total_size = 0;
	if(argc != 2)
	{
		write(1, "Error\n", 5);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if ((i + 1) % 2 == 1)
		{
			if (argv[1][i] >= '0' && argv[1][i] <= '9')
				total_size++;
			else
				{
					printf("Error!!\n");
					return (0);
				}
		}
		else
		{
			if (argv[1][i] != ' ')
			{
				printf("Error!\n");
				return (0);
			}
		}
		i++;
	}
	printf("%d\n", total_size);
	if (check_num(total_size, argv[1]) == 0)
		write(1, "Error", 5);
	else
	{
		field_size = check_num(total_size, argv[1]);
		printf("%d\n", field_size);
	}
}

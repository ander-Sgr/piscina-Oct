/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chekers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:43:47 by mvallhon          #+#    #+#             */
/*   Updated: 2023/10/28 22:09:35 by mvallhon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_check_num(int size_arg)
{
	int	i;
	int	result;	

	i = 0;
	result = 0;
	while (i * i <= size_arg)
	{
		if (i * i == size_arg)
			result = i;
		i++;	
	}
	if (result != 0)
		return (i);
	else
		return (0);
}

int	ft_check_arg(int argc, char **argv)
{
	char    *argument;
	char    prev_char;
	char    cur_char;
	int     nb;
 	int     i;

	argument = argv[1];
	nb = 0;
	i = 0;
	prev_char = ' ';
	if (argc !=  2)
		return (0);
	while (argument[i] != '\0')
	{
		cur_char = argument[i];
		if(!((cur_char >= '0' && cur_char <= '9') || (cur_char == ' '))
			|| (cur_char == ' ' && prev_char == ' '))
			return (0);
		else if (prev_char == ' ' && (cur_char >= '0' && cur_char <= '9'))
			nb++;
		prev_char = argument[i];
		i++;
	}
	return (nb);
}

int	ft_check_number_size(int **cols_rows, int max)
{
	int	i;
	int j;
	int result;

	i = 0;
	result = 1;
	while (i < max)
	{
		j = 0;
		while (j < max)
		{
			if(cols_rows[i][j] == 0 || cols_rows[i][j] > max)
			{
				result = 0;	
				return (result);
			}
			j++;
		}
		i++;
	}
	return (result);
}

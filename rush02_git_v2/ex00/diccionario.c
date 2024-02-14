/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diccionario.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:19:32 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/05 22:25:37 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putstr(char *str);
int		ft_atoi(char *str);

int	ft_readfile(char *file_name, char *buffer, int buffer_size)
{
	int	file_descriptor;

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor < 0)
	{
		//ft_putstr("Error open file");
		return (1);
	}
	read(file_descriptor, buffer, buffer_size);
	close(file_descriptor);
	return (0);
}

int	ft_find_text(int num_tofind, char *buffer, int buffer_size,
		char *text_found)
{
	int		i;
	int		j;
	int		number;

	i = 0;
	j = 0;
	while (i < buffer_size)
	{
		number = ft_atoi(&buffer[i]);
		if (buffer[i] >= '0' && buffer[i] <= '9' && buffer[i] != '\0')
		{
			while (!(buffer[i] < '0' || buffer[i] > '9' && (buffer[i] != ':' && buffer[i] == ' ')))
				i++;
			j = 0;
			while (buffer[i] != '\n' && buffer[i] != '\0' && i < buffer_size)
				text_found[j++] = buffer[i++];
			text_found[j] = '\0';
			if (number == num_tofind)
				return (1);
		}
		i++;
	}
	return (0);
}

void	ft_print_result(char *text)
{
	ft_putstr(text);
}

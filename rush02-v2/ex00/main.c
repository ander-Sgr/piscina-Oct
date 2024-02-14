/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:14:13 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/04 14:54:24 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int	ft_atoi(char *str);
int	ft_rush(int num, char *dic);

int	main(int argc, char *argv[])
{
	int		err;
	int		num;
	char	*dic;

	if (argc < 2)
	{
		ft_putstr("ERROR");
		return (1);
	}
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		dic = "numbers.dict";
	}
	else
	{
		num = ft_atoi(argv[2]);
		dic = argv[1];
	}
	err = ft_rush(num, dic);
	if (err == 1)
		ft_putstr("ERROR");
	return (0);
}

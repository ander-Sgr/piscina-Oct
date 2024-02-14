/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:14:13 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/05 15:16:39 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putstr(char *str);
long int	ft_atoi(char *str);
int			ft_rush(char *num_str, long int num, char *dic);

int	main(int argc, char *argv[])
{
	int	err;

	if (argc < 2 || argc > 3)
	{
		ft_putstr("ERROR\n");
		return (1);
	}
	if (argc == 2)
		err = ft_rush(argv[1], ft_atoi(argv[1]), "numbers.dict");
	else
		err = ft_rush(argv[2], ft_atoi(argv[2]), argv[1]);
	if (err == 1)
		ft_putstr("ERROR\n");
	return (0);
}

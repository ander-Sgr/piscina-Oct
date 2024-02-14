/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:36:25 by aestrell          #+#    #+#             */
/*   Updated: 2023/10/24 19:48:42 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	index;

	i = 0;
	index = 1;
	if (str[0] == '\0')
	{
		index = 1;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (index);
}
/*
int	main()
{
	char *str = "";
	char result = ft_str_is_numeric(str);
	char c = result + '0';
	write(1, &c, 1);
}
*/

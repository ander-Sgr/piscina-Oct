/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:07:02 by aestrell          #+#    #+#             */
/*   Updated: 2023/10/24 19:30:16 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	i;

	index = 1;
	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			index = 0;
		i++;
	}
	return (index);
}
/*
int main(void)
{
	char *str = "aqdrewrwe^r";
	int result = ft_str_is_alpha(str);
	char c = result + '0';
	write(1, &c, 1);
}
*/

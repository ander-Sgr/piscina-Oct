/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:25:17 by aestrell          #+#    #+#             */
/*   Updated: 2023/10/24 21:45:00 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char c[12] = "232ffdvvvv";
	char *str = c;
	char *result;
	int i = 0;

	result = ft_strupcase(str);
	while (result[i] != '\0')
	{
		write(1, &result[i], 1);
		i++;
	}
}
*/

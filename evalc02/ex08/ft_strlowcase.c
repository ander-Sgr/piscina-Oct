/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:02:00 by aestrell          #+#    #+#             */
/*   Updated: 2023/10/24 22:13:11 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char c[22] = "andeEER";
	char *str = c;
	char *result;
	result = ft_strlowcase(str);

	int i = 0;
	while(result[i] != '\0')
	{
		write(1, &result[i], 1);
		i++;
	}
}
*/

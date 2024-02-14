/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:40:59 by aestrell          #+#    #+#             */
/*   Updated: 2023/10/23 
17:26:33 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
	char *src = "HOLA BUEN DIA";
	char dest[15] = "Ander";
	char *result;

	result = ft_strcpy(dest, src);
	int i = 0;

	while (result[i] != '\0')
	{
		write(1, &result[i], 1);
		i++;
	}
}
*/

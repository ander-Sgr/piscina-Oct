/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:21:13 by aestrell          #+#    #+#             */
/*   Updated: 2023/10/23 18:57:27 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < (int)n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < (int)n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

/*
int main()
{

	char *src = "HOLA BUENOOS DIAS";
	char dest[15] = "test de";


	ft_strncpy(dest, src, 3);

	int i = 0;
	while (dest[i] )
	{
		write(1, &dest[i], 1);
		i++;
	}
}
*/

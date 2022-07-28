/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:19:05 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/27 16:05:59 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0' && nb > n)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
  char s1[] = "un string";
  char s2[50] = "Hola soy";
  char s3[] = "un string";
  char s4[50] = "Hola soy";
  printf("%s\n", ft_strncat(s2, s1, 5));
  printf("%s", strncat(s4, s3, 5));
  return (0);
}
*/

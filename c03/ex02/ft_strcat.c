/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:48:50 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/27 16:05:19 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
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
  printf("%s\n", ft_strcat(s2, s1));
  printf("%s", strcat(s4, s3));


  return (0);
}
*/

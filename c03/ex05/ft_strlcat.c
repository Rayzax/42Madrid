/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:16:47 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/27 15:52:39 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	slon;
	unsigned int	dlon;	

	i = 0;
	slon = ft_strlen(src);
	dlon = ft_strlen(dest);
	if (size <= dlon)
		return (size + slon);
	while ((dlon + i) < (size - 1) && src[i] != '\0')
	{
		dest[i + dlon] = src[i];
		i++;
	}
	dest[i + dlon] = '\0';
	return (dlon + slon);
}

/*
int main()
{
	unsigned int size = 7;
  	char str1[20] = "hola";
  	char str2[20] = "sdfg";
	printf("str1: %s \n", str1);
	printf("str2: %s \n", str2);
	unsigned int i = strlcat(str1, str2, size);
	printf("return strlcat: %d \n", i);
	printf("str1 post strlcat: %s \n", str1);
  	char str3[20] = "hola";
  	char str4[20] = "sdfg";
	printf("str3: %s \n", str3);
	printf("str4: %s \n", str4);
	unsigned int j = ft_strlcat(str3, str4, size);
	printf("return ft_strlcat: %d \n", j);
	printf("str3 post ft_strlcat: %s \n", str3);
	return (0);
	
}
*/

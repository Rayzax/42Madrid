/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:26:23 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/28 11:21:13 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
	char *n;
	char *z;
    char arr1[] = {"Hola buenas"};
    char arr[] = {"jejejejejjej"};

	n = strncpy(arr, arr1, 5);
    z = ft_strncpy(arr, arr1, 5);
    printf("%s\n", n);
	printf("%s", z);
}
*/

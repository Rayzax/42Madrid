/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:40:24 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/27 17:58:59 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	count(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (count(to_find) == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + n] == to_find[n])
		{
			n++;
			if (to_find[n] == '\0')
				return (str + i);
		}
		n = 0;
		i++;
	}
	return (0);
}

/*
int main()
{
	char *n;
	char *s;
    char str[] = "Hola buenas tardes";
    char str2[] = "en";
    n = ft_strstr(str, str2);
	s = strstr(str, str2);
    printf("%s\n", n);
	printf("%s", s);
	
	return 0;
}
*/

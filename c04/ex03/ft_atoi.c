/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:58:06 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/27 19:53:01 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	rest;

	i = 0;
	rest = 1;
	num = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 9 && str[i] <= 13) && str[i] != 32)
		{
			if (str[i] == 45)
				rest *= -1;
			else if (str[i] >= 48 && str[i] <= 57)
				num = num * 10 + str[i] - '0';
			else if (str[i] != 43)
				return (num * rest);
		}
		i++;
	}
	return (num * rest);
}

/*
int main()
{
	printf("%d", ft_atoi("   --\n-+--+1234ab567"));
}
*/

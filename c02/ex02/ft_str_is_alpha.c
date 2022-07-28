/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:25:41 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/25 16:27:16 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z' )
			n++;
		else if (str[n] >= 'a' && str[n] <= 'z')
			n++;
		else
			return (0);
	}
	return (1);
}

/*
int main()
{
	char str[] = {""}; 
	int f; 
	f = ft_str_is_alpha(str);
	printf("%d", f);
	return 0;
}
*/

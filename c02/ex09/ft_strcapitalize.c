/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:22:46 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/26 10:52:25 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			if (n == 0)
				str[n] -= 32;
		}
		if (n != 0 && str[n] >= 'A' && str[n] <= 'Z' && str[n - 1] != 32)
			str[n] = str[n] + 32;
		else if (str[n + 1] >= 'a' && str[n + 1] <= 'z')
		{
			if (!(str[n] > 64 && str[n] < 91) && !(str[n] > 96 && str[n] < 123)
				&& !(str[n] <= '9' && str[n] >= '0'))
			{
				n++;
				str[n] -= 32;
			}
		}
		n++;
	}
	return (str);
}

/*
int main()
{
   char arr[] = {"comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
    ft_strcapitalize(arr);
    printf("%s", arr);
    return 0;
}
*/

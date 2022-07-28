/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:43:42 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/25 19:15:56 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
			str[n] = str[n] + 32;
		n++;
	}
	return (str);
}

/*
int main()
{
    char arr[] = {"Hola Muy BUENAS"};
    ft_strupcase(str);
    return *arr;
}
*/

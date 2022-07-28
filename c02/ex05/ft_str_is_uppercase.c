/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:12:08 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/25 15:26:47 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z' )
			n++;
		else
			return (0);
	}
	return (1);
}

/*
int main()
{
    char str[] = {"hola"};
    int f;
    f = ft_str_is_uppercase(str);
    return 0;
}
*/

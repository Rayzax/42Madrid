/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:09:52 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/25 15:26:28 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
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
    f = ft_str_is_alpha(str);
    return 0;
}
*/

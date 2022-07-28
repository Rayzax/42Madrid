/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:06:57 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/25 15:26:13 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= '0' && str[n] <= '9')
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

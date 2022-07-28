/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:16:38 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/25 15:27:01 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 32 && str[n] <= 126)
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

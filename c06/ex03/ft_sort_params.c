/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:05:03 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/28 17:14:18 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}	
	return (s1[i] - s2[i]);
}

void	swap(char *str1, char *str2)
{
	*swap = str1;
	str1 = str2;
	str2 = *swap;
}

int	main(int c, char **v)
{
	int		i;
	int		n;
	char	*swap;
	int		cmp;

	i = 1;
	n = 0;
	cmp = ft_strcmp(v[i], v[i + 1]);
	while (c > i)
	{
		if (cmp < 0)
			swap(v[i], v[i + 1]);
		while (v[i][n] != '\0')
		{
			write(1, &v[i][n], 1);
			n++;
		}
		n = 0;
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

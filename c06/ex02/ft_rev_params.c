/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:04:22 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/28 16:58:56 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int c, char **v)
{
	int	n;
	int	j;

	n = 0;
	j = c - 1;
	while (j != 0)
	{
		while (v[j][n] != '\0')
		{
			write(1, &v[j][n], 1);
			n++;
		}
		write(1, "\n", 1);
		j--;
		n = 0;
	}
	return (0);
}

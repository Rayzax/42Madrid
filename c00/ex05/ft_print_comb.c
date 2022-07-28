/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:02:11 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/18 18:38:41 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char p1, char p2, char p3)
{
	write(1, &p1, 1);
	write(1, &p2, 1);
	write(1, &p3, 1);
	if (p1 < '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}	
}

void	ft_print_comb(void)
{
	char	pos1;
	char	pos2;
	char	pos3;

	pos1 = '0';
	while (pos1 <= '7')
	{	
		pos2 = pos1 + 1;
		while (pos2 <= '8')
		{
			pos3 = pos2 + 1;
			while (pos3 <= '9')
			{
				print(pos1, pos2, pos3);
				pos3++;
			}
			pos2++;
		}
		pos1++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:19:07 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/19 13:22:48 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int n)
{
	char	pos1;
	char	pos2;

	pos1 = n / 10 + '0';
	pos2 = n % 10 + '0';
	write(1, &pos1, 1);
	write(1, &pos2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a);
			write(1, " ", 1);
			print(b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/

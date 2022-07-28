/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:24:20 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/18 18:12:50 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char c)
{
	c = '0';
	while (c >= '0' && c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}

/*
int	main(void)
{
	ft_print_numbers(0);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:03:24 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/18 18:13:11 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	if (n < 0)
		write (1, "N", 1);
}

/*
int	main(void)
{
	ft_is_negative(-1);
}
*/

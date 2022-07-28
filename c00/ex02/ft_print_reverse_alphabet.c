/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:37:02 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/18 18:12:13 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(char c)
{
	c = 'z';
	while (c <= 'z' && c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet('a');
	return (0);
}
*/

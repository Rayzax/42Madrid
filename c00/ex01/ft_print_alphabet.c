/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:32:42 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/19 13:19:42 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(char c)
{
	c = 'a';
	while (c >= 'a' && c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

/* 
int	main(void)
{
	ft_print_alphabet('a');
	return (0);
}
*/

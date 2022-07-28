/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:19:33 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/26 10:57:36 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	letras(int n)
{
	char	letra;

	if (n == 10)
		letra = 'a';
	else if (n == 11)
		letra = 'b';
	else if (n == 12)
		letra = 'c';
	else if (n == 13)
		letra = 'd';
	else if (n == 14)
		letra = 'e';
	else if (n == 15)
		letra = 'f';
	else
		letra = n + '0';
	write (1, &letra, 1);
}

void	base(int n)
{
	int	n1;
	int	n2;

	n1 = n / 16;
	n2 = n % 16;
	write(1, "\\", 1);
	letras(n1);
	letras(n2);
}

void	ft_putstr_non_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!(str[n] >= 32 && str[n] <= 126))
			base((unsigned char)str[n]);
		else
			write(1, &str[n], 1);
		n++;
	}	
}
/*
int	main()
{
    ft_putstr_non_printable("Coucou\ntu vaàs bien ?");
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:18:20 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/27 19:56:12 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	cuenta(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	cbase;
	char numero;

	cbase = cuenta(base);
	numero = base[nbr / cbase] + '0';
}

int main()
{
	ft_putnbr_base(23123, "01");
}

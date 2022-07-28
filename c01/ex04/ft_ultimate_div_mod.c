/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:08:47 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/17 16:12:32 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	div = *a / *b;
	rest = *a % *b;
	*a = div;
	*b = rest;
}

/*
int main()
{
	int j = 21;
	int g = 5;
	int *ptr = &j;
	int *ptr2 = &g;
	ft_ultimate_div_mod(ptr, ptr2);
	printf("%i\n", *ptr);
    printf("%i\n", *ptr2);
}
*/

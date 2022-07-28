/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:34:25 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/17 16:12:18 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{

    int a = 125;
    int b = 5;
    int *ptr = &a;
    int *ptr2 = &b;
    ft_div_mod(a, b, ptr, ptr2);
    printf("%i\n", *ptr);
    printf("%i\n", *ptr2);
}
*/

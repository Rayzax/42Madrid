/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:26:08 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/17 17:56:33 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	x;
	int	y;

	i = size - 1;
	a = 0;
	while (i > a)
	{
		x = tab[a];
		y = tab[i];
		tab[a] = y;
		tab[i] = x;
		a++;
		i--;
	}	
}

/*int main()
{
	int i[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(i, 5);
	int f =0;
    while (f < 5)
    {
    printf("%d", i[f]);
    f++;
    }
	return 0;
}
*/

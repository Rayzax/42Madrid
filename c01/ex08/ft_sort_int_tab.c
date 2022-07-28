/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:19:46 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/17 17:58:10 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	x;
	int	i;

	i = 0;
	a = 0;
	b = a + 1;
	while (i < size)
	{
		while (a < size)
		{
			if (tab[a] > tab [b])
			{
				x = tab[a];
				tab[a] = tab[b];
				tab[b] = x;
			}
			a++;
			b++;
		}
		i++;
		a = 0;
		b = a + 1;
	}
}	
/*
int main()
{
	int arr[] = {4, 2, 6, 1, 8};
	ft_sort_int_tab(arr, 5);
	int f =0;
    while (f <5)
    {
    printf("%d", arr[f]);
    f++;
    }
	return 0;
}
*/

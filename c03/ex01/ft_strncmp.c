/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:18:19 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/27 18:40:44 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > i)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] >= s2[i])
			return (1);
		else if (s1[i] <= s2[i])
			return (-1);
	}
	return (0);
}

/*
int main()
{
	int i;
	int n;
  	i = ft_strncmp("2olas", "holas", 2);
   	n = strncmp("2olas", "holas", 2);
	printf("%d\n", i);
	printf("%d", n);
  return 0;
}
*/

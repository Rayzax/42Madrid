/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:24:36 by mramiro-          #+#    #+#             */
/*   Updated: 2022/07/28 11:21:38 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}	
	dest[n] = '\0';
	return (dest);
}

/*
int main(){
	char arr1[] = {"Hola buenas"};
	char arr[11];

	ft_strcpy(arr, arr1);
	printf("%s", arr);	
}
*/

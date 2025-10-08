/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:44:56 by raulp             #+#    #+#             */
/*   Updated: 2025/10/08 16:25:00 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_itoa(int n)
{
	int count = 0;
	int sign;
	int tmp;
	char *arr1;
	int i;

	tmp = n;
	sign = 0;
	i =0;
	if (tmp < 0)
	{
		count++;
		tmp *= -1;
	}
	
	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;
	}
	// aqui meto un espacio mas para el tema de el \0
	arr1 = malloc(count + 1);
	arr1[count] = '\0';

	while (count > 0)
	{
		count--;
		arr1[count] = n % 10 + '0';
		n = n / 10;
	}
	return arr1 ;
}
int main(void)
{
	char *car;

	car = ft_itoa(123);
	printf("char: %s\n", car);
	free(car);
}
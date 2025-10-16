/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:44:56 by raulp             #+#    #+#             */
/*   Updated: 2025/10/16 11:08:06 by raulp            ###   ########.fr       */
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
	sign = n;
	i = 0;
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
	if (n < 0)
	{
		arr1[0] = '-';
		n *= -1;
	}
	put_end_start(arr1, count, n);
	return arr1;
}

static int put_end_start(char *s, int i, int n)
{
	while (i > 0)
	{
		i--;
		if (s[i] == '-')
			break;
		s[i] = n % 10 + '0';
		n = n / 10;
	}
}

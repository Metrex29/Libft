/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:44:56 by raulp             #+#    #+#             */
/*   Updated: 2025/10/22 15:00:24 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_digits(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	put_end_start(char *s, int i, long n)
{
	while (i > 0)
	{
		i--;
		if (s[i] == '-')
			break ;
		s[i] = n % 10 + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	int		count;
	long	num;
	char	*arr1;

	num = n;
	count = count_digits(n);
	arr1 = malloc(count +1);
	if (!arr1)
		return (NULL);
	arr1[count] = '\0';
	if (num == 0)
		arr1[0] = '0';
	if (n < 0)
	{
		arr1[0] = '-';
		num = -num;
	}
	put_end_start(arr1, count, num);
	return (arr1);
}

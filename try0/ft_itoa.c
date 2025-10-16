/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:44:56 by raulp             #+#    #+#             */
/*   Updated: 2025/10/16 16:46:59 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * Fill the string backwards with decimal digits of n.
 *
 * Starts at index i-1 and writes n%10+'0' into s while decrementing i,
 * stopping if i reaches 0 or a '-' is found (preserves sign).
 *
 * @param s destination string buffer (must contain space for digits)
 * @param i starting index (exclusive; writing begins at i-1)
 * @param n integer whose digits are written (assumes magnitude already positive)
 */
static void	put_end_start(char *s, int i, int n)
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
/*
 * If tmp < 0: increment count and make tmp positive.
 * Note: operates on local copies (no effect on caller).
 */
static void if_negative(int tmp, int count)
{
	if (tmp < 0)
	{
		count++;
		tmp *= -1;
	}
}

/**
 * ft_itoa - Convert an integer to a NUL-terminated decimal string.
 * @n: Integer value to convert.
 *
 * Return: Pointer to a newly malloc'd string containing the decimal
 * representation of n (including a '-' for negative values), or NULL
 * on allocation failure. Caller is responsible for freeing the result.
 */
char *ft_itoa(int n)
{
	int count = 0;
	int tmp;
	char *arr1;

	tmp = n;
	if_negative(tmp, count);
	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;
	}
	arr1 = malloc(count + 1);
	arr1[count] = '\0';
	if (n < 0)
	{
		arr1[0] = '-';
		n *= -1;
	}
	put_end_start(arr1, count, n);
	return (arr1);
}

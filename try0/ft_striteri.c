/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:57:28 by raulp             #+#    #+#             */
/*   Updated: 2025/10/20 11:50:09 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static void f (unsigned int i, char* a)
{
	(void) i;
	if (*a >= 'a' && *a <= 'z')
		*a -= 32;
} */

void ft_striteri(char *s, void (*f)(unsigned int,
									char *))
{
	unsigned int i;

	i = 0;

	if (!s || !f)
		return;

	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

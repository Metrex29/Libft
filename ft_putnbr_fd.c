/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:53:56 by raulp             #+#    #+#             */
/*   Updated: 2025/10/24 14:44:53 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Writes an integer to the specified file descriptor.
 *
 * This function outputs the integer value 'n' as a sequence of characters
 * to the file descriptor 'fd'. It handles negative numbers, including the
 * edge case of the minimum representable integer (-2147483648), and writes
 * the digits recursively. The function does not return a value.
 *
 * @param n  The integer to be written.
 * @param fd The file descriptor to which the integer will be written.
 */

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
	}
	c = n % 10 + '0';
	write (fd, &c, 1);
}

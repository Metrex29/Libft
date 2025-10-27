/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:09:23 by raulp             #+#    #+#             */
/*   Updated: 2025/10/24 14:44:52 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Writes a character to the specified file descriptor.
 *
 * This function outputs the character 'c' to the file or stream
 * represented by the file descriptor 'fd'.
 *
 * @param c  The character to write.
 * @param fd The file descriptor to write to.
 */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

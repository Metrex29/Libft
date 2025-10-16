/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:27:26 by raulp             #+#    #+#             */
/*   Updated: 2025/10/16 16:43:14 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putendl_fd - write a null-terminated string followed by a newline to a file descriptor
 *
 * @s: pointer to the null-terminated string to write
 * @fd: file descriptor to write to (e.g. STDOUT_FILENO, STDERR_FILENO, or an open file)
 *
 * Description:
 * Writes each character of the string pointed to by @s to the file descriptor @fd
 * using the POSIX write(2) system call, then writes a single newline character.
 *
 * Return:
 * This function returns no value (void). Any errors returned by write(2) are
 * ignored by the implementation.
 *
 * Preconditions and notes:
 * - @s must be a valid, null-terminated C string and must not be NULL. Passing NULL
 *   causes undefined behavior.
 * - The implementation shown contains a bug: the index variable 'i' is used before
 *   being initialized, which results in undefined behavior. Initialize it before use,
 *   for example: int i = 0;
 * - The function does not check or propagate write errors; if error handling is
 *   required, check the return value of write(2).
 * - To compile, include <unistd.h> for the declaration of write(2).
 *
 * Thread-safety:
 * The function does not use global state and is thread-safe provided multiple threads
 * do not concurrently write to the same file descriptor without synchronization.
 *
 * Example:
 *   ft_putendl_fd("Hello, world!", STDOUT_FILENO);
 */
void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
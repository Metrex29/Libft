/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:00:28 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/14 13:24:04 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H

# define LIBFT_H
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
size_t	strlcpy(char *dst, const char *src, size_t size);
int ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
int strncmp(const char *s1, const char *s2, size_t n);
void *ft_memset(void *dest, int c, size_t count);
void *ft_memcpy(void *dest, const void *src, size_t count);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_atoi(const char *string);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_putchar_fd(char c, int fd);

// esto termina la deficnion con sus funciones puestas, para no duplicar
#endif


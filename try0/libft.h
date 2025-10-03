/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:00:28 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/02 14:42:24 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esto pregunta al compilador, si esta o no definido aun.

#ifndef LIBFT_H

// si no lo esta lo define ahora.
# define LIBFT_H
#include <stddef.h>

// funciones prototipos
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
size_t	strlcpy(char *dst, const char *src, size_t size);
int ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
int strncmp(const char *s1, const char *s2, size_t n);
void *ft_memset(void *dest, int c, size_t count);
void *ft_memcpy(void *dest, const void *src, size_t count);



// esto termina la deficnion con sus funciones puestas, para no duplicar
#endif


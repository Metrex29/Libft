/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:00:28 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/01 12:14:02 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esto pregunta al compilador, si esta o no definido aun.

#ifndef LIBFT_H

// si no lo esta lo define ahora.
# define LIBFT_H
#include <stddef.h>

// funciones prototipos
strlcat(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
int ft_toupper(int c);


// esto termina la deficnion con sus funciones puestas, para no duplicar
#endif


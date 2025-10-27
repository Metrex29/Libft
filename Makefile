# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 14:34:45 by raulp             #+#    #+#              #
#    Updated: 2025/10/24 14:57:11 by cpicon-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libft.a
SONAME	=	libft.so

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I .
AR		=	ar
ARFLAGS	=	rcs
RM		=	rm -f

SRCS	= 	ft_isalpha.c \
            ft_isdigit.c \
            ft_isalnum.c \
            ft_isascii.c \
            ft_isprint.c \
            ft_strlen.c \
            ft_memset.c \
            ft_bzero.c \
            ft_memcpy.c \
            ft_memmove.c \
            ft_strlcpy.c \
            ft_strlcat.c \
            ft_toupper.c \
            ft_tolower.c \
            ft_strchr.c \
            ft_strrchr.c \
            ft_strncmp.c \
            ft_memchr.c \
            ft_memcmp.c \
            ft_strnstr.c \
            ft_atoi.c \
            ft_calloc.c \
            ft_strdup.c \
            ft_substr.c \
            ft_strjoin.c \
            ft_strtrim.c \
            ft_split.c \
            ft_itoa.c \
            ft_strmapi.c \
            ft_striteri.c \
            ft_putchar_fd.c \
            ft_putstr_fd.c \
            ft_putendl_fd.c \
            ft_putnbr_fd.c

BONUS	=	ft_lstnew_bonus.c \
            ft_lstsize_bonus.c \
            ft_lstadd_front_bonus.c

OBJS 	= $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

bonus: $(NAME) $(BONUS_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(BONUS_OBJS)

so: $(OBJS)
	$(CC) -shared -o $(SONAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME) $(SONAME)

re: fclean all

.PHONY: all clean fclean re bonus so

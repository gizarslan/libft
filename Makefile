# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garslan <garslan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/11 12:57:36 by garslan           #+#    #+#              #
#    Updated: 2025/06/11 13:45:54 by garslan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c 
SOURCES += ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c
SOURCES += ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c
SOURCES += ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c
SOURCES += ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c 
SOURCES += ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c
SOURCES += ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c

BON_SOURCES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c
BON_SOURCES += ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c
BON_SOURCES += ft_lstmap_bonus.c ft_lstlast_bonus.c ft_lstiter_bonus.c

OBJECTS = $(SOURCES:.c=.o)
BON_OBJECTS = $(BON_SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

bonus : $(NAME) $(BON_OBJECTS)
	ar rcs $(NAME) $(BON_OBJECTS)

%.o : %.c
		$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS) $(BON_OBJECTS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus
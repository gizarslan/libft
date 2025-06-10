NAME = libft.a 
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c 
SOURCES += ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c
SOURCES += ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c
SOURCES += ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c 
SOURCES += ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c
SOURCES += ft_strtrim.c 

BON_SOURCES = 

OBJECTS = $(SOURCES:.c=.o)
BON_OBJECTS = $(BON_SOURCES: .c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c
		$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus
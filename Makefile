NAME = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
INCLUDES = includes/
SRC_DIR = includes/

SRCS =	ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c

.PHONY: all clean fclean re

OBJ = $(addprefix $(SRC_DIR), $(SRCS:.c=.o))

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(INCLUDES)libft.h
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INCLUDES)

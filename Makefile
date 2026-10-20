NAME = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
INCLUDES = includes/

SRCS =	srcs/ft_putchar.c\
		srcs/ft_swap.c\
		srcs/ft_putstr.c\
		srcs/ft_strlen.c\
		srcs/ft_strcmp.c

.DEFAULT: all

.PHONY: all clean fclean re

OBJ = $(SRCS:.c=.o)

all: $(NAME) 
 
clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

.c.o: 
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INCLUDES)
SRCS = ft_printf.c \
	ft_puthex_fd.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

# cc -Wall -Wextra -Werror ft_printf.c ft_puthex_fd.c -L libft -l ft -o libftprintf
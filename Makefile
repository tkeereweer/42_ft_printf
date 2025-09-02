SRCS = ft_printf.c \
	ft_putchar.c \
	ft_puthex.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_putuint.c

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

# cc -Wall -Wextra -Werror ft_printf.c ft_puthex_fd.c -L libft -l ft -o libftprintf
# cc -Wall -Wextra -Werror -L. -Llibft -lftprintf -lft try_printf.c -o test
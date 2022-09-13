CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_itoa.c \
	ft_put_hexa.c \
	ft_put_string.c \
	ft_memset.c \
	ft_put_int.c \
	ft_put_uint.c \
	ft_calloc.c \
	ft_put_lhexa.c \
	ft_putchar.c \
	ft_counter.c \
	ft_printf.c \
	ft_put_per.c \
	ft_separate.c \
	ft_digit_count.c \
	ft_put_char.c \
	ft_put_pointer.c \
	ft_printf.c \
	

NAME = libftprintf.a


OBJS = $(SRCS:.c=.o)



.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

#$(NAME) : $(OBJS)
#	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_put_int.c \
	ft_counter.c \
	ft_printf.c \
	ft_separate.c \
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
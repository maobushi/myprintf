CC = gcc
FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
		

NAME = libftprintf.a


$(OBJS) = $(SRCS:.c=.o)



.PHONY all clean 

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)


clean:
	rm -f $(OBJS)
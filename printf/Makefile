NAME = libftprintf.a

CC =  gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

ARS = ar rcs

SRC = ft_printf.c\
	ft_putchar.c\
	ft_putnbr.c\
	ft_putstr.c\
	ft_writesimbol.c\
	ft_printhex.c


OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		$(CC) -c $(CFLAGS) $(SRC)
		$(ARS) $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all, clean, fclean, re

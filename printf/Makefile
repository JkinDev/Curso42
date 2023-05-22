NAME = libftprintf.a

CC =  gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

ARS = ar rcs

SRC = \


OBJS = $(SRCS:.c=.o)

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

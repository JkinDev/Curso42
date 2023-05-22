NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC := ft_atoi.c\
ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memcpy.c\
ft_memset.c\
ft_strchr.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strlen.c\
ft_strncmp.c\
ft_tolower.c\
ft_toupper.c\
ft_memmove.c\
ft_strrchr.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_split.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c


OBJS := $(SRC:%.c=%.o)

BONUS = ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c\
ft_lstsize_bonus.c\
ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c\
ft_lstdelone_bonus.c\
ft_lstclear_bonus.c\
ft_lstiter_bonus.c\
ft_lstmap_bonus.c


BOBJ = $(BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

bonus: $(OBJ) $(BOBJ)
	ar rcs $(NAME) $(OBJ) $(BOBJ)

$(BOBJ):$(BONUS)
	$(CC) $(CFLAGS) -c $(BONUS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(BOBJ)

re: fclean all

.PHONY: re all clean fclean

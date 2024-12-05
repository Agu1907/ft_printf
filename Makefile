NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c \
      ft_putchar.c \
	  ft_putnbr.c \
	  ft_unsigned_putnbr.c  \
	  ft_lowerhexa.c \
	  ft_upperhexa.c \
	  ft_address.c \
	  ft_putstr.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME)	: $(OBJ)
	ar rc $(NAME) $?

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

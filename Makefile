NAME		=	except_tester

SRC		=	\
			main.c		\
			exceptions.c

OBJ		=	$(SRC:.c=.o)
CFLAGS		+=	-Wall -Wextra

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

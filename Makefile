NAME	=	dicowesh

SRC	=	find.c		\
		readline.c	\
		strlen.c	\
		menu_suite.c	\
		affich.c	\
		main.c		\
		strcpy.c	\
		ajout_def.c	\
		menu.c		\
		strdup.c	

OBJ	=	$(SRC:%.c=%.o)

$NAME:				
		gcc $(SRC) -o $(NAME)

all:		$(all)
		gcc $(SRC) -o $(NAME)

clean:		$(clean)
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
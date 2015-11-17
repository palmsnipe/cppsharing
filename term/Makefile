SRC	=	main.cpp \
		../shared/*.cpp

CC	=	g++

OBJ	=	$(SRC:.cpp=.o)

TMP	=	$(SRC:.cpp=.cpp~)

NAME	=	cppshared

CPPFLAGS =	-I../shared/

all	:	$(OBJ)
	$(CC) $(OBJ) $(CPPFLAGS) -o $(NAME)

debug	:	$(OBJ)
	$(CC) -g $(OBJ) $(CPPFLAGS) -o $(NAME)

clean	:
	rm -rf $(OBJ) $(TMP)

fclean	: clean
	rm -rf $(NAME)

re	: fclean all
SRC	=	main.cpp \
		../shared/mylib.cpp

CC	=	g++

OBJ	=	$(SRC:.cpp=.o)

TMP	=	$(SRC:.cpp=.cpp~)

NAME	=	cppshared

CPPFLAGS =	-I../shared/ -I../shared/libs/rapidjson/include/

all	:	$(OBJ)
	$(CC) $(OBJ) $(CPPFLAGS) -o $(NAME)

debug	:	$(OBJ)
	$(CC) -g $(OBJ) $(CPPFLAGS) -o $(NAME)

clean	:
	rm -rf $(OBJ) $(TMP)

fclean	: clean
	rm -rf $(NAME)

re	: fclean all
NAME = megaphone
SRC = megaphone.cpp
OBJ = megaphone.o

FLAGS = -Werror -Wextra -Wall
RM = rm -rf

$(NAME) : $(OBJ)
	c++ -std=c++98 $(OBJ) -o $(NAME)
%.o : %.c
	c++ -std=c++98 $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
.PHONY: all clean fclean re

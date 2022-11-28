NAME = phonebook
HEADERS = PhoneBook.hpp Contact.hpp utils.hpp
SRCS = PhoneBook.cpp Contact.cpp main.cpp utils.cpp
OBJS := $(SRCS:.cpp=.o)

RM = rm -rf
CC = c++ -std=c++98

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)

re : fclean all
.PHONY: all clean fclean re

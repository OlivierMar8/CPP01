#Makefile	CPP01	ex05

SRCS		= main.cpp Harl.cpp

OBJS		= $(SRCS:.cpp=.o)

NAME		= harl 

CC			= c++ #c++-12

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra -std=c++98  -g


all:		${NAME}

%.o: %.cpp
			$(CC) $(CFLAGS) -c $< 

${NAME}:	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
			

.PHONY:		all clean fclean  re

clean:	
			$(RM) $(OBJS)


fclean:		clean
			$(RM) $(NAME)

re:			fclean all

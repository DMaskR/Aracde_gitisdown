##
## EPITECH PROJECT, 2020
## cpp_d09_2019
## File description:
## Makefile
##

CC				=		g++

RM				=		rm -f

SRCS             =		src/ecs.cpp				\
						src/event.cpp				\
						src/game.cpp		\
						src/graphical.cpp		\
						main.cpp

OBJS             =		$(SRCS:.cpp=.o)

NAME 			 =		arcade
CPPFLAGS        = -I ./include
CPPFLAGS        += -Wall -Wextra -g3

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(OBJS) -o $(NAME)
clean:
				$(RM) $(OBJS) *.g*

fclean:			clean
				$(RM) $(NAME)
				$(RM) *.gc*
				$(RM) unit_tests
				$(RM) *.o

tests_run:
				$(CC) --coverage $(CPPFLAGS) $(SRCS) $(LIBSRC) -c
				$(CC) $(CPPFLAGS) $(TEST) -c
				g++ -o unit_tests *.o -lcriterion -lgcov
				./unit_tests
				gcovr
				gcovr -b

re:				fclean all

sweet:			all clean

.PHONY: all clean fclean re

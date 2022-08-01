NAME = ex01
SRCS = $(addprefix src/, main.cpp Zombie.cpp zombieHorde.cpp)
OBJS = ${SRCS:.cpp=.o}
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
HDRS = inc
CC = c++

all: ${NAME} $(HDRS) Makefile

${NAME}: ${OBJS}
	$(CC) $(FLAGS) $(OBJS) -o $@

%.o: %.cpp $(HDRS)
	${CC} ${FLAGS} -I$(HDRS) -c $< -o ${<:.cpp=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

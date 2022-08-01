NAME = ex03
SRCS = $(addprefix src/, main.cpp Weapon.cpp HumanA.cpp HumanB.cpp)
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

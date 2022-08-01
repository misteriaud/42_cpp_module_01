NAME = ex04
SRCS = main.cpp
OBJS = ${SRCS:.cpp=.o}
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
CC = c++

all: ${NAME} Makefile

${NAME}: ${OBJS}
	$(CC) $(FLAGS) $(OBJS) -o $@

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} *.replace

re: fclean all

.PHONY: all clean fclean re

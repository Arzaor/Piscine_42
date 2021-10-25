NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}
CC = gcc
LIRC = ar -rc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I./includes

all: ${NAME}

.c.o:
		${CC} ${CLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${LIRC} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 11:17:03 by jmanet            #+#    #+#              #
#    Updated: 2023/04/03 11:17:18 by jmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRCS = ${wildcard *.cpp}

OBJS = ${SRCS:.cpp=.o}

HEADERS = ${wildcard *.hpp}

CC = g++

all : ${NAME}

${NAME} : ${OBJS} ${HEADERS}
	${CC} ${FLAGS} ${SRCS} -o ${NAME}


clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

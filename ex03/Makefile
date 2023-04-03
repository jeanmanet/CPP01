# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/01 10:41:23 by jmanet            #+#    #+#              #
#    Updated: 2023/04/03 09:49:02 by jmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

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

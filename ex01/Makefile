# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omakran <omakran@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 17:30:01 by omakran           #+#    #+#              #
#    Updated: 2024/05/13 17:31:38 by omakran          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = Span

SRCS =  main.cpp Span.cpp

OBJS := $(SRCS:.cpp=.o)

CC = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

all: $(EXEC)

$(EXEC):	$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(EXEC)

%.o:	%.cpp Span.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
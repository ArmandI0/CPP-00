# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armandanger <armandanger@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 22:41:46 by armandanger       #+#    #+#              #
#    Updated: 2024/04/14 23:36:23 by armandanger      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP     = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME    = megaphone

SRCS    =	\
			megaphone.cpp \
			
OBJS    = $(SRCS:.c=.o)

all     : $(NAME)

.c.o    :
			$(CPP) $(CFLAGS) -c $< -o $(<:.c=.o)
  
$(NAME) :	$(OBJS)
			$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)	
 
clean   :
			rm -f $(OBJS)

fclean  :	clean
			rm $(NAME)

re : fclean all

.PHONY  : all clean fclean re
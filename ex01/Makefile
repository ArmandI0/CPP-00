# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aranger <aranger@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 22:41:46 by armandanger       #+#    #+#              #
#    Updated: 2024/04/27 15:16:54 by aranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP     = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME    = phone

SRCS    =	\
			main.cpp \
			utils.cpp \
			Contact_Class.cpp \
			PhoneBook_class.cpp \

OBJS    = $(SRCS:.cpp=.o)

all     : $(NAME)

.c.o    :
			$(CPP) $(CFLAGS) -c $< -o $(<:.c=.o)
  
$(NAME) :	$(OBJS)
			$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)	
 
clean   :
			rm -f $(OBJS)

fclean  :
			@$(MAKE) clean			
			rm -f $(NAME)

re : fclean $(NAME)

.PHONY  : all clean fclean re
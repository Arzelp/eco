##
## Makefile for make asm in /asm/
##
## Made by Frederic ODDOU
## Login oddou_f <frederic.oddou@epitech.eu>
##
## Started on  Mon Mar 14 16:57:22 2016 Frederic ODDOU
## Last update Mon Mar 14 16:57:22 2016 Frederic ODDOU
##

ECHO		=	/bin/echo -e
DEFAULT	=	"\033[00m"
GREEN		=	"\033[0;32m"
TEAL		=	"\033[1;36m"
RED			=	"\033[0;31m"
BLUE		=	"\033[0;34m"

DIR_LIB	= ./lib/
DIR_INC = ./include/
DIR_SRC = ./src/
DIR_PARSER = ./src/parser/
DIR_RESOLV = ./src/resolution/

SRC 		= $(DIR_SRC)eco.c

OBJ			= $(SRC:.c=.o)

CC			= gcc

RM			= rm -f

CFLAGS	+= -O3 -g \
	-Wextra \
	-Wall \
	-Werror \
	-I$(DIR_INC)

LDFLAGS	= -lm \
	-L ./lib/ \
	-l my

NAME		= eco

all:	libmy $(NAME)

libmy:
	@make -C $(DIR_LIB) -f Makefile -s

$(NAME):	$(OBJ)
	@$(CC) $(OBJ) $(LDFLAGS) -o $(NAME)

clean:
	@make clean -C $(DIR_LIB) -f Makefile -s
	@$(RM) $(OBJ)

fclean:	clean
	@make fclean -C $(DIR_LIB) -f Makefile -s
	@$(RM) ./$(NAME)

re: fclean all

.c.o:
		@gcc $(CFLAGS) $(LDFLAGS) -c $< -o $@ && \
		 $(ECHO) $(GREEN) "[OK]" $(TEAL) $< $(DEFAULT) || \
		 $(ECHO) $(RED) "[XX]" $(TEAL) $< $(DEFAULT)

.PHONY: all clean fclean re

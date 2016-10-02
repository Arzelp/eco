##
## Makefile for make in /lib/
##
## Made by Frederic ODDOU
## Login oddou_f <frederic.oddou@epitech.eu>
##
## Started on  Mon Mar 14 17:44:26 2016 Frederic ODDOU
## Last update Mon Mar 14 17:44:26 2016 Frederic ODDOU
##

ECHO		=	/bin/echo -e
DEFAULT	=	"\033[00m"
GREEN		=	"\033[0;32m"
TEAL		=	"\033[1;36m"
RED			=	"\033[0;31m"
BLUE		=	"\033[0;34m"

DIRINC	= ../include/

SRC			= my_putchar.c \
	my_putstr.c \
	my_putstr_e.c \
	my_getnbr.c \
	my_strlen.c \
	my_strcat.c \
	my_strcat_dyn.c \
	my_strcmp.c \
	my_strncmp.c \
	my_strcpy.c \
	my_strdup.c \
	my_strndup.c \
	my_strncpy.c \
	my_strcat_dyn.c \
	my_strstr.c \
	my_memset.c \
	my_swap_int.c \
	my_count_char.c \
	printf/my_putnbr_base.c \
	printf/my_printf_func1.c \
	printf/my_printf_func2.c \
	printf/my_printf_func3.c \
	printf/my_printf_func4.c \
	printf/my_printf_func5.c \
	printf/my_printf_choice.c \
	printf/my_printf_count.c \
	printf/my_printf_nbr.c \
	printf/my_printf_diez_fptr.c \
	printf/my_printf_diez_fptr_next.c \
	printf/my_add_space.c \
	printf/my_inbr.c \
	printf/my_putnbr.c \
	printf/my_putnbr_unsigned.c \
	printf/my_printf.c

CC			= gcc

RM			= rm -f

LIB			=

FLAG		=	-Wall \
	-Wextra \
	-Werror \
	-I ../include/

NAME	= libmy.a

OBJS	= $(SRC:.c=.o)

all:	message $(NAME)

message:
	@$(ECHO) $(BLUE) "  _      _____ ____  " $(DEFAULT)
	@$(ECHO) $(BLUE) " | |    |_   _|  _ \\ " $(DEFAULT)
	@$(ECHO) $(BLUE) " | |      | | | |_) |" $(DEFAULT)
	@$(ECHO) $(BLUE) " | |      | | |  _ <" $(DEFAULT)
	@$(ECHO) $(BLUE) " | |____ _| |_| |_) |" $(DEFAULT)
	@$(ECHO) $(BLUE) " |______|_____|____/" $(DEFAULT)

$(NAME):	$(OBJS)
	@ar rc $(NAME) $(OBJS) && \
	 $(ECHO) $(GREEN) "[AR]" $(TEAL) $(NAME) $(DEFAULT) || \
	 $(ECHO) $(RED) "[XX]" $(TEAL) $(NAME)
	@ranlib $(NAME) && \
	 $(ECHO) $(GREEN) "[OK]" $(TEAL) $(NAME) $(DEFAULT) || \
	 $(ECHO) $(RED) "[XX]" $(TEAL) $(NAME)

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re: fclean all

.c.o:
	@gcc $(LIB) $(FLAG) -c $< -o $@ && \
	 $(ECHO) $(GREEN) "[OK]" $(TEAL) $< $(DEFAULT) || \
	 $(ECHO) $(RED) "[XX]" $(TEAL) $< $(DEFAULT)

.PHONY: all clean fclean re

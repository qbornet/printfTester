SHELL	= /bin/zsh

LIBFT_PRINTF = libftprintf.a

SRCS =	ft_putc.c ft_puts.c test_functions.c tester.c

OBJS = $(addprefix srcs/, $(SRCS:%.c=%.o))

NAME = tester
CC = clang
CFLAGS = -Wall -Werror -Wextra -I ./includes -I .. $(addprefix -I, $(shell find .. -type f -name "*.h" | head -1 | grep -o ".*\/"))


%.o:	%.c checkmakefile
	make -C ..
	$(CC) $(CFLAGS) -c $< -o $@
	echo "\e[4m$<\e[0m\e[30G\e[1;38;5;11m>\e[0m	\e[1;38;5;232m[\e[0m\e[1;38;5;11m$@\e[0m\e[1;38;5;232m]\e[0m"

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -L.. -lftprintf $(OBJS) -o $@
	echo "\e[1;4mFINISHED\e[0m\n" && sleep 1 
	echo "\ec\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && ./tester

all:	$(NAME)

clean:
	rm -rf $(OBJS)
	make clean -C ..

fclean:	clean
	rm -rf $(NAME)
	make fclean -C ..
	echo "\e[1;38;5;9m===== CLEANING OK =====\e[0m"

re:	fclean all

checkmakefile:
	ls .. | grep Makefile > /dev/null 2>&1 || (tput setaf 1 && echo "Makefile not found." && exit 1)

.PHONY: all clean fclean re zsh checkmakefile

ifdef VERBOSE
.SILENT:
endif

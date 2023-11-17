SHELL	= /bin/zsh

SLEEP_VALUE = 1.25
LIBFT_PRINTF = libftprintf.a
PRINTFHEADER = 'ft_printf.h'# change with your .h name, let the single quote.

SRCS =	ft_putc.c ft_puts.c test_functions.c tester.c

OBJS = $(addprefix srcs/, $(SRCS:%.c=%.o))

NAME = tester
CC = clang
CFLAGS = -Wall -Werror -Wextra -I ./includes -I .. $(addprefix -I, $(shell find .. -type f -name ${PRINTFHEADER} | grep -oh ".*\/"))


%.o:	%.c checkmakefile
	make re -C ..
	sed -E -i 's/# include "placeholder"/# include <$(PRINTFHEADER)>/g' includes/tester.h script/wrapper.c 2> /dev/null
	$(CC) $(CFLAGS) -c $< -o $@
	echo -n "\\r\e[4m$<\e[0m\e[30G\e[1;38;5;11m>\e[0m	\e[1;38;5;12m[\e[0m\e[1;38;5;11m$@\e[0m\e[1;38;5;12m]\e[0m" && sleep 0.5
	echo -n "\e[2K"

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -L.. $(OBJS) -o $@ -lftprintf
	echo -n "\\r\e[1;4mFINISHED\e[0m" && sleep $(SLEEP_VALUE)
	echo -n "\\r\e[2K"
	echo -n "\\r\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && ./tester && sh script/format_error.sh '$(PRINTFHEADER)' && make fclean -C ..

all:	$(NAME)

clean: clean_msg
	rm -rf $(OBJS)
	make clean -C ..

fclean:	clean clean_msg
	rm -rf $(NAME)
	make fclean -C ..

re:	fclean all

clean_msg:
	echo -n "\\r\e[1;38;5;9m===== CLEANING OK =====\e[0m" && sleep $(SLEEP_VALUE)
	echo -n "\\r\e[2K"

update:
	git pull > /dev/null 2>&1

checkmakefile: update
	ls .. | grep Makefile > /dev/null 2>&1 || (tput setaf 1 && echo "Makefile not found." && exit 1)

.PHONY: all clean fclean re checkmakefile update clean_msg


.SILENT:

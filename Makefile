SHELL	= /bin/zsh

SLEEP_VALUE = 1.25
LIBFT_PRINTF = libftprintf.a
PRINTFHEADER = 'ft_printf.h'# change with your .h name, let the single quote.

SRCS =	ft_putc.c ft_puts.c test_functions.c tester.c

OBJS = $(addprefix srcs/, $(SRCS:%.c=%.o))

NAME = tester
CC = clang
CFLAGS = -g3 -Wall -Werror -Wextra -I ./includes -I .. $(addprefix -I, $(shell find .. -type f -name ${PRINTFHEADER} | grep -oh ".*\/"))


%.o:	%.c checkmakefile
	@make re -C ..
	@sed -E -i 's/# include "placeholder"/# include <$(PRINTFHEADER)>/g' includes/tester.h script/wrapper.c 2> /dev/null
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -n "\\r\e[4m$<\e[0m\e[30G\e[1;38;5;11m>\e[0m	\e[1;38;5;12m[\e[0m\e[1;38;5;11m$@\e[0m\e[1;38;5;12m]\e[0m" && sleep 0.5
	@echo -n "\e[2K"

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) -L.. $(OBJS) -o $@ -lftprintf
	@echo -n "\\r\e[1;4mFINISHED\e[0m" && sleep $(SLEEP_VALUE)
	@echo -n "\\r\e[2K"
	@echo -n "\\r\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && rm -rf trace && ./tester && sh script/format_error.sh '$(PRINTFHEADER)' && make fclean -C ..

c: $(OBJS)
	@$(CC) $(CFLAGS) -L.. $(OBJS) -o $(NAME) -lftprintf
	@echo -n "\\r\e[1;4mFINISHED\e[0m" && sleep $(SLEEP_VALUE)
	@echo -n "\\r\e[2K"
	@echo -n "\\r\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && rm -rf trace && ./tester c && sh script/format_error.sh '$(PRINTFHEADER)' && make fclean -C ..

s: $(OBJS)
	@$(CC) $(CFLAGS) -L.. $(OBJS) -o $(NAME) -lftprintf
	@echo -n "\\r\e[1;4mFINISHED\e[0m" && sleep $(SLEEP_VALUE)
	@echo -n "\\r\e[2K"
	@echo -n "\\r\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && rm -rf trace && ./tester s && sh script/format_error.sh '$(PRINTFHEADER)' && make fclean -C ..

p: $(OBJS)
	@$(CC) $(CFLAGS) -L.. $(OBJS) -o $(NAME) -lftprintf
	@echo -n "\\r\e[1;4mFINISHED\e[0m" && sleep $(SLEEP_VALUE)
	@echo -n "\\r\e[2K"
	@echo -n "\\r\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && rm -rf trace && ./tester p && sh script/format_error.sh '$(PRINTFHEADER)' && make fclean -C ..

di: $(OBJS)
	@$(CC) $(CFLAGS) -L.. $(OBJS) -o $(NAME) -lftprintf
	@echo -n "\\r\e[1;4mFINISHED\e[0m" && sleep $(SLEEP_VALUE)
	@echo -n "\\r\e[2K"
	@echo -n "\\r\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && rm -rf trace && ./tester di && sh script/format_error.sh '$(PRINTFHEADER)' && make fclean -C ..

x: $(OBJS)
	@$(CC) $(CFLAGS) -L.. $(OBJS) -o $(NAME) -lftprintf
	@echo -n "\\r\e[1;4mFINISHED\e[0m" && sleep $(SLEEP_VALUE)
	@echo -n "\\r\e[2K"
	@echo -n "\\r\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && rm -rf trace && ./tester x && sh script/format_error.sh '$(PRINTFHEADER)' && make fclean -C ..

X: $(OBJS)
	@$(CC) $(CFLAGS) -L.. $(OBJS) -o $(NAME) -lftprintf
	@echo -n "\\r\e[1;4mFINISHED\e[0m" && sleep $(SLEEP_VALUE)
	@echo -n "\\r\e[2K"
	@echo -n "\\r\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && rm -rf trace && ./tester X && sh script/format_error.sh '$(PRINTFHEADER)' && make fclean -C ..

mix: $(OBJS)
	@$(CC) $(CFLAGS) -L.. $(OBJS) -o $(NAME) -lftprintf
	@echo -n "\\r\e[1;4mFINISHED\e[0m" && sleep $(SLEEP_VALUE)
	@echo -n "\\r\e[2K"
	@echo -n "\\r\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && rm -rf trace && ./tester mix && sh script/format_error.sh '$(PRINTFHEADER)' && make fclean -C ..

return: $(OBJS)
	@$(CC) $(CFLAGS) -L.. $(OBJS) -o $(NAME) -lftprintf
	@echo -n "\\r\e[1;4mFINISHED\e[0m" && sleep $(SLEEP_VALUE)
	@echo -n "\\r\e[2K"
	@echo -n "\\r\e[0m\e[5G\e[1;38;5;4m==========[PART1]==========\e[0m\n" && rm -rf trace && ./tester return && sh script/format_error.sh '$(PRINTFHEADER)' && make fclean -C ..

all:	$(NAME)

clean: clean_msg
	@rm -rf trace
	@rm -rf $(OBJS)
	@make clean -C ..

fclean:	clean clean_msg
	@rm -rf $(NAME)
	@make fclean -C ..

re:	fclean all

clean_msg:
	@echo -n "\\r\e[1;38;5;9m===== CLEANING OK =====\e[0m" && sleep $(SLEEP_VALUE)
	@echo -n "\\r\e[2K"

update:
	@git pull > /dev/null 2>&1

checkmakefile: update
	@ls .. | grep Makefile > /dev/null 2>&1 || (tput setaf 1 && echo "Makefile not found." && exit 1)

.SILENT:
.PHONY: all clean fclean re checkmakefile update clean_msg

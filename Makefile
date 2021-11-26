FT_PRINTFDIR = ../
FT_PRINTFDIRINCLUDE = ../includes
FT_PRINTFINCLUDENAME = ft_printf.h
LIBFT_PRINTF = libftprintf.a

SRCS =	ft_putc.c ft_puts.c test_functions.c tester.c

OBJS = $(addprefix srcs/, $(SRCS:%.c=%.o))

NAME = tester
CC = clang
CFLAGS = -Wall -Werror -Wextra
INCLUDES = ./includes
PRINTF_INCLUDES = $(FT_PRINTFDIRINCLUDE)/$(FT_PRINTFINCLUDENAME)

.c.o:
	$(CC) $(INCLUDES) $(PRINTF_INCLUDES) $(CFLAGS) -c $< -o $@

$(NAME):	try $(OBJS)
	$(CC) $(CFLAGS) $(PRINTF_INCLUDES) $(INCLUDES) $(OBJS) $(LIBFT_PRINTF) -o $@

all:	$(NAME)

try:
	cd  ../
	make
	cp	../$(LIBFT_PRINTF) ./ 2>/dev/null || true
	cd libftTester

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)
	rm -rf libftprintf.a

re:	fclean all

.PHONY: all try clean fclean re

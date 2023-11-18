#!/bin/sh

PATH_HEADER=`find ../ -type f -name "$1" | grep -oh ".*\/"`
if [ -n "$PATH_HEADER" ]
then
	echo -n '' > /tmp/tmpError
    echo -n '' > /tmp/normalError
    clang -Wall -Werror -Wextra ./script/normal.c 2> /tmp/normalError; rm -rf ./a.out 2> /dev/null
	clang -Wall -Werror -Wextra -I "$PATH_HEADER" -L ../ script/wrapper.c -lftprintf 2> /tmp/tmpError; rm -rf ./a.out 2>/dev/null
	echo -n "\e[4mFORMAT ERROR\e[0m\e[20G:"
	if [ -s "/tmp/tmpError" ]
	then
		echo " \e[1;38;5;10mOK\e[0m"
        echo "\e[1mIf you get a \e[0m\e[1;38;5;9mKO\e[0m\e[1m check 'trace' file for more info!\e[0m\n"
	else
		echo " \e[1;38;5;9mKO\e[0m"
        echo "[FORMAT ERROR]\n<ft_printf, >printf" >> trace
        echo ""
        echo "\e[1mIf you get a \e[0m\e[1;38;5;9mKO\e[0m\e[1m check 'trace' file for more info!\e[0m\n"
        echo -n "\n<" >> trace
        cat /tmp/tmpError >> trace
        echo "\n\n>" >> trace
        cat /tmp/normalError >> trace
        echo "\n[INFO FORMAT ERROR]:You should received an error when compiling your printf" >> trace
	fi
else
	echo "\e[38;5;9mPRINTF HEADER IS WRONG\e[0m"
fi


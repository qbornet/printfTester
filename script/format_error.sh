#!/bin/sh

PATH_HEADER=`find ../ -type f -name "$1" | grep -oh ".*\/"`
if [ -n "$PATH_HEADER" ]
then
	echo -n '' > /tmp/tmpError
	clang -Wall -Werror -Wextra -I "$PATH_HEADER" -L ../ script/wrapper.c -lftprintf 2> /tmp/tmpError; rm -rf ./a.out
	echo -n "\e[4mFORMAT ERROR\e[0m\e[20G:"
	if [ -s "/tmp/tmpError" ]
	then
		echo " \e[1;38;5;10mOK\e[0m"
	else
		echo " \e[1;38;5;9mKO\e[0m"
	fi
else
	echo "\e[38;5;9mPRINTF HEADER IS WRONG\e[0m"
fi


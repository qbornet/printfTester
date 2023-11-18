#!/usr/bin/env bash

arg=$1

case $arg in

    c)
        make -s fclean
        make -s c
        ;;
    s)
        make -s fclean
        make -s s
        ;;
    p)
        make -s fclean
        make -s p
        ;;
    di)
        make -s fclean
        make -s di
        ;;
    x)
        make -s fclean
        make -s x
        ;;
    X)
        make -s fclean
        make -s X
        ;;
    mix)
        make -s fclean
        make -s mix
        ;;
    return)
        make -s fclean
        make -s return
        ;;
    *)
        make -s re
        ;;
esac

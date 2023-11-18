#!/usr/bin/env bash

make -s re

arg=$1

# add cho in sing option for
case $arg in

    "format error")
        ;;

    *)
        echo 'use ["format error", "", "", ""]'
        ;;
esac

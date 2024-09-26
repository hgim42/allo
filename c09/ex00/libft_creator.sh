#!/bin/bash

gcc -c libft.c -o libft.o
ar rcs libft.a libft.o
rm libft.o
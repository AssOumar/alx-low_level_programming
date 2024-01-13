#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
gcc -c *.c
ar rc liball.a *.o
ranlib liball.a

CC=gcc
CF=-Wall -Wextra -ansi -Wno-return-type -Wno-implicit-int -Wno-implicit-function-declaration

S=src
B=bin

all: main

main:
	$(CC) $(S)/nine.c -o $(B)/nine $(CF)

clean:
	rm $(B)/*

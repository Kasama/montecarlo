all: main.c map.c
	gcc -o main map.c main.c -lm

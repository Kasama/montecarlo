#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "map.h"

#define MAP_SIZE 10000000
#define ITERATIONS 100000000

int main(int argc, char *argv[]){

	MAP * map = newMap(MAP_SIZE);

	srand(time(NULL));

	int i;
	int x, y;
	for (i = 0; i < ITERATIONS; i++){
		x = rand() % MAP_SIZE;
		y = rand() % MAP_SIZE;
		addPoint(map, x, y);
	}

	double prop = getProportion(map);
	printf("pi = %lf\n", prop*4);

	return EXIT_SUCCESS;
}

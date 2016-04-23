#include "map.h"
#include <math.h>
#include <stdlib.h>

struct map {

	int radius;
	int inside, total;
	
};

MAP* newMap(int radius){
	int i;
	MAP* map = malloc(sizeof(MAP));
	map->radius = radius;
	map->inside = 0;
	map->total = 0;

	return map;
}

void freeMap(MAP *map){
	free(map);
}

int addPoint(MAP *map, int x, int y){
	double dist = sqrt(pow(x, 2) + pow(y, 2));
	if (dist <= map->radius)
		(map->inside)++;
	(map->total)++;
}

double getProportion(MAP *map){
	return ((double) map->inside) / (map->total);
}

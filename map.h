#ifndef MAP_H
#define MAP_H

typedef struct map MAP;

MAP* newMap(int radius);
void freeMap(MAP *map);
int addPoint(MAP *map, int x, int y);
double getProportion(MAP *map);

#endif // MAP_H

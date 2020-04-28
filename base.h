#ifndef _BASE_H_
#define _BASE_H_

#include "record.h"

// function prototypes
void start();
int selectMenu();
int loadAlbums(struct Album *albums[]);
void printAlbums(struct Album *albums[], int count);
int createAlbums(struct Album *albums[], int count);
void saveAlbums(struct Album *albums[], int count);

void freeAlbums(struct Album *albums[], int count);
void deleteAlbums(struct Album *albums[], int count);
void update(struct Album * album[],int count);
void Sort();

#endif

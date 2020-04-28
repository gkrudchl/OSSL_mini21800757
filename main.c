#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base.h"
#include "extras.h"
#include "record.h"
#define MAX_RECORDS 1000

int main(void){
  struct Album * albums[MAX];  
  int count = 0, menu ;
  
  start();  
  count = loadAlbums(albums);  
  printf("There are %d albums.\n", count);

  while(1){
    menu = selectMenu();
    if(menu == 99) break;
    else if(menu == 1) printAlbums(albums, count);    
    else if(menu == 2) createAlbums(albums, count) ;
    else if(menu == 3) deleteAlbums(albums, count);
    else if(menu == 4) searchAlbums(albums, count);
    else if(menu == 5) update(albums,count);
    else if(menu == 6) saveAlbums(albums, count);  
  }
  printf("*** Finished");
  return 0;
}
int selectMenu(){
  int menu;
  printf("********************\n1. List the albums \n2. Add the album\n3. Delete the album\n4. Search albums\n5. Update albums\n6. Save\n99. Quit\n********************\n");
  printf("=> Selected menu > ");
  scanf("%d",&menu);
 
  return menu;
}

void freeAlbums(struct Album *albums[], int count){
  free(albums);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base.h"
#define MAX 100

void start(){
  printf("\n\n*** ♬ Welcome to Happy Music♬ ***\n\n");
  printf("==> loading ...\n\n");
}

int loadAlbums(struct Album *albums[]){ 
  int i=0;
  FILE *fp;
  fp=fopen("albums.txt","rt");
  
  for(i=0;;i++){
    albums[i]=( struct Album *)malloc(sizeof(struct Album));
  
    fscanf(fp,"%s", albums[i]->singer);
    if(feof(fp)) break;
    fscanf(fp, "%s", albums[i]->title);
    fscanf(fp, "%d", &albums[i]->year);
    fscanf(fp, "%s", albums[i]->company);

  }
  fclose(fp);

 return i;
}
void printAlbums(struct Album *albums[], int count){
  int i=0;
  
  if(count==0) printf("File is EMPTY\n");
  for(i=0;i<count;i++){
  printf("%d\t",i+1);
  printf("%s\t%s\t%d\t%s",albums[i]->singer,albums[i]->title,albums[i]->year,albums[i]->company);
  printf("\n");
  }

}
void saveAlbums(struct Album *albums[], int count){
  int i;
  FILE *fp;
  fp=fopen("albums.txt","wt");
  for(i=0;i<count;i++){
    fprintf(fp,"%s %s %d %s\n",(albums[i]->singer), albums[i]->title, albums[i]->year, (albums[i]->company));
  }
  fclose(fp);
  printf("\nSaved\n\n\n");
}

int createAlbums(struct Album *albums[], int count){

  int i;
  int num;
  printf("number: ");
  scanf("%d", &num);

  printf("\n<Add %d Albums>\n",num);

  printf("Singer\tTitle\tYear\tCompany\n");

  for(i=0;i<num;i++){

  
  albums[i]=(struct Album *)malloc(sizeof(struct Album));
  
  scanf("%s %s %d %s", albums[i]->singer,albums[i]->title,&(albums[i]->year),albums[i]->company);
  }

  

  return 0;
}




void deleteAlbums(struct Album *albums[], int count){
  char del[100]={0};
  char temp[100]={0};
  printf("Enter the title to be deleted: ");
  scanf("%s",del);
  int i,j,n;
  int answer;
 
  for(i=0;i<count;i++){
    
    if(strcmp(albums[i]->title,del)==0)
    {

    printf("Do you want to delete %s's %s?\n",albums[i]->singer,albums[i]->title);
    printf("1. Yes 2. No \n");
    printf("Enter 1 or 2 : ");
    scanf("%d",&answer);

      if(answer==1){
      for(j=i+1;j<count;j++){
          strcpy(albums[i]->title,albums[i+1]->title);
        }
      printf("deleted succeed\n");
      }
      else if(answer==2){
        printf("Back to Menu\n");
      }
    }
    
  
}
}
 void update(struct Album * album[],int count){

   
  int i;
  char newtitle[20];
  int answer;
  
  

  printf("Title to be updated: ");
  scanf("%s", newtitle);

  for(i=0;i<5;i++){

  if(strcmp(album[i]->title,newtitle)==0){

    printf("Update this, %s %s %d %s ? 1.Yes 2.No ",album[i]->singer,album[i]->title,(album[i]->year),album[i]->company);

    scanf("%d",&answer);
    if(answer==1){
      FILE *fp;
  
      fp=fopen("albums.txt","wt");

      printf("Write updated information\n");
      scanf("%s %s %d %s",album[i]->singer,album[i]->title,&(album[i]->year),album[i]->company);
      
      printf("\nUpdate succeed!!\n");
      fclose(fp);
    }

  }    
  break;
  }

 }




 

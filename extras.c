#include <stdio.h>
#include "extras.h"


void searchAlbums(struct Album *albums[], int count){
  
 
  int s_num;
  int reset;

  while(reset!=99){
  printf("\n<Searching>\n1. Singer\n2. Title\n3. year\n4. company\n99.quit\n");
  printf("=> What type do you want to search?");
  scanf("%d",&s_num);

 
  
  if(s_num==1){
  char singer[20];
  int index=1;
  printf("=> Enter the Singer : ");
  scanf("%s",singer);
  printf("********************\n");
  
  for(int i=0;i<count;i++){
    if(strstr(albums[i]->singer,singer)) {
      
    printf("%d\t",index);
      printf("%s\t%s\t%d\t%s\n",albums[i]->singer,albums[i]->title,albums[i]->year,albums[i]->company);
    index++;
    }
      
  }
  
  }

  else if(s_num==2){
  char title[20];
  int index=1;
  printf("=> Enter the Title : ");
  scanf("%s",title);
  printf("********************\n");
  
  for(int i=0;i<count;i++){
    if(strstr(albums[i]->title,title)) {
      
    printf("%d\t",index);
      printf("%s\t%s\t%d\t%s\n",albums[i]->singer,albums[i]->title,albums[i]->year,albums[i]->company);
    index++;
    }
  }
  printf("\n");
  }
  else if(s_num==3){
  int year;
  int index=1;
  printf("=> Enter the Year : ");
  scanf("%d",&year);
  printf("********************\n");
  
    for(int i=0;i<count;i++){
    if(albums[i]->year==year) {
    
    printf("%d. ",index);
    printf("%s\t%s\t%d\t%s\n",albums[i]->singer,albums[i]->title,albums[i]->year,albums[i]->company);
      index++;
    }
  }
  printf("\n");
  }

  else if(s_num==4){
  char company[20];
  int index=1;
  printf("=> Enter the Company : ");
  scanf("%s",company);
  printf("********************\n");
  

  for(int i=0;i<count;i++){
    if(strstr(albums[i]->company,company)) {
      
    printf("%d\t",index);
      printf("%s\t%s\t%d\t%s\n",albums[i]->singer,albums[i]->title,albums[i]->year,albums[i]->company);
    index++;
    }
      
  }
  printf("\n");

  }
  else if(s_num==99){
    break;
  }
    printf("\n More search(0) or quit(99)? ");
  scanf("%d",&reset);
  }
printf("\n");
}


// TODO: Add more functions to fulfill the optional requirements*/

#include<stdio.h>
#include<stdlib.h>

struct person
{
  int id;
  char fname[50];
  char lname[50];
};

int main()
{
  FILE *fp;
  struct person input;
  fp =fopen("person.txt","r");
  if(fp == NULL)
  {
    fprintf(stderr,"Error in file opening\n");
    exit(1);
  }
  while(fread(&input,sizeof(struct person),2,fp))
    printf("ID : %d \n NAME : %s %s \n",input.id,input.fname,input.lname);
  fclose(fp);

  return 0;

}

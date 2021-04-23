#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fptr;
  char buf[100],c;
  
  printf("enter the name of the file to open:\n");
  scanf("%s",&buf);
  
  fptr=fopen(buf,"r");
  if(fptr==NULL)
  {
    printf("The file is not available.\n");
    exit(0);
  }
  c=fgetc(fptr);
  while(c!=EOF)
  {
    printf("%c",c);
    c=fgetc(fptr);
  }
  printf("\n");
  
  fclose(fptr);
  return 0;

}


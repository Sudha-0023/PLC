#include <stdio.h>
#include <stdlib.h>

int main()
{

  char s[1000];
  FILE *fptr;
  fptr = fopen("test.txt", "w");
  if (fptr == NULL) 
  {
     printf("Error");
     exit(1);
  }
  printf("Enter a sentence:\n");
  fgets(s, sizeof(s), stdin);
  fprintf(fptr, "%s", s);
  fclose(fptr);
  return 0;



}

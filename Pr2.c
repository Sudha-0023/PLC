#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp;
    char ch;
    int character = 0, space = 0, tab = 0, line = 0;
    fp = fopen("first.txt","r");
    if(fp == NULL)
    {
        printf("File Not Found\n");
        exit(1);
    }
    else
    {
        while(1)
        {
            ch = fgetc(fp);
            if(ch == EOF)   
            {
                break;
            }
            character++;
            if(ch == ' ')
                space++;
            else if(ch == '\t')
                tab++;
            else if(ch == '\n')
                line++;
        }
    }
    fclose(fp);
    printf("Characters = %d\n", character);
    printf("Tabs       = %d\n", tab);
    printf("New Lines  = %d\n", line);
    printf("Spaces     = %d\n", space);

}

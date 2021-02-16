#include<stdio.h>
int main()
{
    int i = 0;
    FILE *fp = fopen("output.txt","w");
    if (fp == NULL)
      return 0;
 
    char string[] = "good bye", received_string[20];
 
    for (i = 0; string[i]!='\0'; i++)
     fputc(string[i], fp);
 
    fclose(fp);
    fp = fopen("output.txt","r");
    fgets(received_string,20,fp);
 
    printf("%s", received_string);
    fclose(fp);
    return 0;
}
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    //to open file and also write
    fp=fopen("dummy.txt","r");     // a = append,w = write,r = read
    //to read from the file
    while((ch=fgetc(fp))!=EOF)   // EOF= end of file
    {
        printf("%c",ch);
    }
    fclose(fp);
}
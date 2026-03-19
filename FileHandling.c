#include <stdio.h>
/*
file : to store permanantly data

file pointer
to open file 
write into thee file
file close
close
*/

int main()
{
    FILE *fp;
    //to open file and also write
    fp=fopen("dummy.txt","w");     // a = append,w = write,r = read
    //to write into the file
    fprintf(fp,"hello tops technology india");
    fclose(fp);
}
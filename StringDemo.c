#include<stdio.h>
#include<string.h>

void strrev(char *str)
{
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    // char name[] = "Vivek";
    // printf("%s",name);

    // char str[4] = {'V','i','v','\0'};
    // printf("\n%s\n",str);
    
    // char username[20];
    // char actual_username[] = "Vivek";
    
    // printf("Enter your username : ");
    // scanf("%s",username);
    
    // if(strcmp(username,actual_username) == 0)
    // {
    //     printf("Username is correct!");
    // }
    // else
    // {
    //     printf("Invalid username!");
    // }

    // printf("\nLength of username is : %lu",strlen(username));


    char str1[]= "Vivek";
    char str2[20];

    strcpy(str2,str1);
    printf("%s\n",str2);

    strrev(str1);
    printf("rev is %s",str1);

    /*  String concatenation */

    char str[]="vivek";
    char str2[]=" kaklotar";
    strcat(str,str2);
    printf("\n%s",str);
    return 0;
}
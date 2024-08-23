#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
     int i;
    printf("\n \"This C program for checking whether a given string  is a multi line comment or not\"\n");
    for(int i=0;i<2;i++){
    printf("\n (%d) Enter a String : ",i+1);
    gets(string);
    int length = strlen(string);
    if(string[0]=='/' && string[1]=='*' && string[length-2]=='*' && string[length-1]=='/'){
        printf(" %s - It is a multi line comment\n",string);
    }
    else{
         printf(" %s - It is not a multi line comment\n",string);
    }
  }
    return 0;
}


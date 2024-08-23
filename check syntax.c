#include <stdio.h>
#include <string.h>
int main(){
    int i,flag,len,left,right,invert,semi,j;
    char string[100];
    char array[100]="";
    printf(" C program to check syntax of 'printf' function\n");
    for(j=0;j<2;j++){
    printf("\n (%d)Enter a String : ",j+1);
    gets(string);
    len=left=right=invert=semi=0;
    len=strlen(string);
    for(i=0;i<=5;i++){
        array[i]=string[i];
    }
    if(strcmp(array,"printf")==0 ){
     {
      if((string[6]=='(')

      &&(string[7]=='"')

    &&(string[len-2]==')')

     &&(string[len-1]==';')
     &&(string[len-3]=='"')
      )
      printf(" %s - Correct Syntax\n",string);

    else{
        printf("Error");
    }
    }

    }
  else{
        printf(" Error in printf keyword usage\n");
        }

    return 0;
}
}





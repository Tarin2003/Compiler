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
     for(i=6;i<len;i++){
      if(string[i]=='(')
        left=left+1;
      if(string[i]=='"')
        invert=invert+1;
      if(string[i]==')')
        right=right+1;
      if(string[i]==';')
       semi=semi+1;
    }
        if(left==1 && right==1 && invert==2 && semi==1){
         printf(" %s - Correct Syntax\n",string);
        }
        else if(left==0)
        printf(" %s - Opening parenthesis absent after for keyword(syntax error)\n",string);
        else if(invert!=2)
        printf(" %s - Inverted comma absent(syntax error)\n",string);
        else if(right==0)
        printf(" %s - closing parenthesis absent at end(syntax error)\n",string);
        else if(semi==0)
        printf(" %s - semicolon absent at end(syntax error)\n",string);
    }
  else{
        printf(" Error in printf keyword usage\n");
        }
    }
    return 0;
}



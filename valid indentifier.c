#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char a[100];

  int flag,key,j,i=1;
  char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
   printf("\n \"This program for checking whether a given string is a valid identifier or not\"\n");
   for(j=0; j<3;j++)
   {
    flag=key=0;
    printf("\n (%d) Enter an identifier : ",j+1);
    gets(a);
    if(isalpha(a[0]) || a[0]=='_'){
     flag=1;
    }
    for(i=1;i<strlen(a);i++)
    {
    if(!isdigit(a[i]) && !isalpha(a[i]) && !(a[i]=='_' ))
     {
          flag=0;
          break;
     }
    }
    for(i = 0; i < 32; i++) {
      if(strcmp(a,keyword[i])==0) {
         key = 1;
      }
   }
    if(flag==1 && key==0){
       printf("\n %s - It is a valid identifier\n",a);
    }
    else{
        printf("\n %s - It is not a valid Identifier\n",a);
    }
  }
    return 0;
}

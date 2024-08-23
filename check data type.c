 #include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char a[100];
  int i=1,key,integer,floates,character,string,flag,j;
  float floatNum=0;
  int intNum=0;
  char charNum;
  char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
    for(j=0;j<2;j++)
    {
     flag=key=integer=floates=character=string=0;
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
         key= 1;
      }
   }

    if(flag==1 && key==0)
    {
       printf("\n %s - It is valid identifier\n",a);
        char str[100];
        printf("\n To check whether the user input is of integer or float or single character or string data type\n");
        printf("\n Enter a input : ");
         gets(str);
         for(i=0;i<strlen(str);i++)
         {
            if(isdigit(str[i]) && !isalpha(str[i]) )
            {
               integer=1;
            }
            else if(isalpha(str[i]) && str[1]!='\0' && !isdigit(str[i]))
            {
               string =1;
            }
            else if(str[i]=='.')
            {
                floates = 1;
            }
            else if(isalpha(str[0]) && str[1]=='\0')
            {
                character=1;
            }
         }
         if(integer==1 && floates==0 && string==0 && character==0)
          {
            intNum = atof(str);
            printf("\n The input %d is a integer number\n int %s = %d;\n",intNum,a,intNum);
          }
          else if(floates==1 && integer==1 && string==0 && character==0)
          {
            floatNum = atof(str);
            printf("\n The input %f is a float number\n float %s = %f;\n",floatNum,a,floatNum);
          }
          else if(character==1 && integer==0 && floates==0 && string==0)
          {
            charNum = str[0];
            printf("\n The input %c is a character \n char %s = \'%c\';\n",charNum,a,charNum);
          }
           else
           {
            printf("\n The input %s is a string \n char %s[] = \"%s\";\n",str,a,str);
           }
    }
    else{
        printf("\n %s - It is not a valid Identifier\n",a);
     }
  }
   return 0;
}

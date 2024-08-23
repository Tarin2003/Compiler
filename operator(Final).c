#include<stdio.h>
int main(){
   char str[5];
   printf("\n Enter any operator : ");
   gets(str);
   switch(str[0]){
   case'>': if(str[1]=='=')
          printf("\n Greater than or equal\n");
          else
          printf("\n Greater than\n",str);
          break;
  case'<': if(str[1]=='=')
           printf("\n Less than or equal\n");
           else
           printf("\n Less than\n");
           break;
  case'=': if(str[1]=='=')
           printf("\n Equal to\n");
           else
           printf("\n Assignment\n");
           break;
 case'!': if(str[1]=='=')
          printf("\n Not Equal\n");
          else
          printf("\n Bit Not\n");
          break;
 case'&': if(str[1]=='&')
          printf("\n Logical AND\n");
          else
          printf("\n Bitwise AND\n");
          break;
 case'|': if(str[1]=='|')
          printf("\n Logical OR\n");
          else
          printf("\n Bitwise OR\n");
          break;
 case'+': printf("\n The operator %s is a Addition",str);
          break;
 case'-': printf("\n The operator %s is a Subtraction",str);
          break;
 case'*': printf("\n The operator %s is a Multiplication",str);
          break;
 case'/': printf("\n The operator %s is a Division",str);
           break;
 case'%': printf("\n The operator %s is a Modulus",str);
           break;
 default: printf("\n Not a operator\n");
}
 return 0;
}

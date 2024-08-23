#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    int state =0,i;
    char str[10];
    gets(str);

    for(i=0;i<strlen(str);i++){

     if(state==0 && str[i]=='a'){

               state =0;
      if(str[(strlen(str)-2)]=='b' && strlen(str)==3){
 state=2;
    }
     }
     else if((state==0 || state==1) && str[i]=='b'){
            state =1;
        }
    else if(state==0 && str[i]=='a'){
               state =1;
     }
     else if(state==1 && str[i]=='b'){
               state =2;
     }
     else if(state==2 && str[i]=='b'){
               state =3;
               break;
     }

        else{
            state =4;
            break;
        }


    }

    if(state==0){
        printf("a* recognize");
    }
    else if(state==3 && strlen(str)==3){
        printf("abb recognize");
    }
    else if(state==1){
        printf("a*b+ recognize");
    }

    else{
         printf("Not recognize");
    }

    }


#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i,state;
    state=0;

    printf("Enter a String : ");
    gets(str);
    for(i=0;i<strlen(str);i++){
  if(str[i]=='a' && state==0){
        state=1;
    }
    else if(str[i]=='a' && state==1){
        state=2;
    }
    else if(str[i]=='b' && state==2){
        state=3;
    }

    else{
       state=4;
    }
    }
    if(state==3 && strlen(str)==3){
        printf("%s is accepted under rule 'aab'\n",str);
    }
    else if(state==1 && strlen(str)==1){
        printf("%s is accepted under rule 'a'\n",str);
    }
    else if(state==0 || state==2){
         printf("String %s is not recognised with pattern : 'a*b'\n",str);
    }

    return 0;
}



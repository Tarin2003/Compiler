#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i,state,j;
    state=0;
    for(j=0;j<2;j++){
    printf("\n Enter a String : ");
    gets(str);
    for(i=0;i<strlen(str);i++){
    if(str[i]=='a' && state==0){
             state=0;
    }
    else if(str[i]=='b' && (state==0 || state==1)){
        state=1;
    }
    else{
       state=2;
    }
    }
    if(state==1){
        printf("\n String %s is accepted under rule 'a*b+'\n",str);
    }
    else if(state==0 || state==2){
         printf("\n String %s is not recognized with pattern : 'a*b+'\n",str);
    }
    }
    return 0;
}



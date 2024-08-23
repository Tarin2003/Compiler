#include<stdio.h>
int main(){
    char str[20];
    int i,j;
    for(j=0;j<3;j++){
    printf("\n %d.Enter a String : ",j+1);
    gets(str);
    if(str[0]=='a' && str[1]=='\0'){
             printf("\n String %s is accepted under rule 'a'\n",str);
    }
    else if(str[0]=='a' && str[1]=='a' && str[2]=='b' && str[3]=='\0'){
        printf("\n String %s is accepted under rule 'aab'\n",str);
    }
    else{
       printf("\n String %s is not recognized with pattern : 'aab' or 'a'\n",str);
    }
}
    return 0;
}


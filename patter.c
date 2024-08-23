#include<stdio.h>
int main(){
    char str[20];
    int i;

    printf("\n Enter a String : ");
    gets(str);
     if(str[0]=='a' && str[1]=='a' && str[2]=='b' && str[3]=='\0'){
        printf("\n %s is accepted under rule 'aab'\n",str);
    }
    else{
    printf("\n String %s is not recognized with pattern : 'aab'\n",str);
    }

    return 0;
}

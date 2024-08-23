#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int a,abb,index1,index2,b;
    for(int j=0;j<2;j++){
    a=index1=index2=abb=b=0;

    printf("\n Enter a String : ");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a' && str[i+1]=='b' && str[i+2]=='b'){
            abb=1;
            index1=i;
        }
         else if(str[i]=='a'){
            a=1;
            index2=i;
        }
        else{
             b=0;
        }
    }
    if(abb==1){
        printf("\n %s is accepted under rule 'abb'\n Substring match Index : %d\n",str,index1);
    }
    if(a==1){
        printf("\n %s is accepted under rule  'a'\n Substring match Index : %d\n",str,index2);
    }
    else {
        printf("\n %s is not recognised - 'abb' or 'a'\n",str);
    }
    }
    return 0;
}

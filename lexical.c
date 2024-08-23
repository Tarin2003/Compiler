#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char a[100];

  int flag=0,ctr=0,key=0,j=0,i=1,id=0,identifier=0,constant=0;
  char keys[30];
  char r[100][100];
  char h[100];
  char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
   printf("\n \"This program for checking whether a given string is a valid identifier or not\"\n");

    flag=key=0;
    printf("\n  Enter an identifier : ");
    gets(a);

  for(i=0;i<strlen(a);i++){
    if(a[i]=='+' || a[i]=='+' || a[i]=='-' || a[i]=='*'||a[i]=='/' || a[i]=='%' || a[i]=='=' ){
       printf("%c is a operator\n",a[i]);
        r[ctr][j]='\0';
             ctr++; //for next word
            j=0;
    }
      else if(a[i]==',' || a[i]==';' || a[i]=='(' || a[i]==')' || a[i]=='{' || a[i]=='}'){
        printf("%c is a punctuation\n",a[i]);
         r[ctr][j]='\0';
             ctr++;
            j=0;
    }

  else if(a[i]==' '||a[i]=='\0')
        {
          r[ctr][j]='\0';
             ctr++;//for next word
            j=0;    //for next word, init index to 0
        }

  else{

         r[ctr][j]=a[i];

         j++;
  }
  }

       for(id=0;id<=ctr;id++)
{

strcpy(h,r[id]);


flag=0;
       for(key=0;key<32;key++){
        if(strcmp(r[id],keyword[key])==0){
            printf("%s is a keyword\n",r[id]);
            flag=1;

        }
       }

      if(flag==0){
            for(int m=0;m<strlen(h);m++){
                if(isalpha(h[m])){
                   identifier=1;

                }
                else if(isdigit(h[m])){
                    constant=1;

                }

            }
            if(identifier==1){
                printf("%s is a identifier\n",r[id]);
                identifier=0;
            }
            if(constant==1){
               printf("%s is a constant\n",r[id]);
               constant=0;
            }



       }
       strcpy(h,"");

}





    return 0;
}

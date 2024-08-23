#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100];
    FILE *file;

    char c;
int flag=0,ctr=0,key=0,j=0,i=0,id=0,identifier=0,constant=0,k=0,p=0,x=0,y=0,op=0,se=0;
  char keys[30];
  char r[100];
  char h[100];


  char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
    file = fopen("student.o","r");
    if(file==NULL)
    {
        printf("File does not exist");


    }
    else
    {
        printf("File is opened\n");
      while(!feof(file))
      {


          c = fgetc(file);
       printf("%c",c);
        a[i]=c;
        i++;

      }
      printf("\n");


   for(i=0;i<strlen(a);i++){
        if(a[i]==' ' ||a[i]=='\n'  || a[i]==',' || a[i]==';' || a[i]=='(' || a[i]==')' || a[i+1]=='{' || a[i+1]=='}'
        ||a[i]=='+' || a[i]=='-' || a[i]=='*'||a[i]=='/' || a[i]=='%' || a[i]=='=')
        {



          r[j]='\0';
             //for next word

            j=0;
            flag=0;

       for(key=0;key<32;key++){
        if(strcmp(r,keyword[key])==0){
            printf("%s is a keyword\n",r);
            flag=1;

        }
       }
       if(flag==0){
            for(int m=0;m<strlen(r);m++){
                if((isalpha(r[m]) || isdigit(r[m]) || r[m]=='_') && (isalpha(r[0]) || r[0]=='_')) {
                   identifier=1;

                }
                else if(isdigit(r[m]) &&!(isalpha(r[m+1]))){
                    constant=1;

                }
                else{

                   y=1;
                   break;

                }


            }
            if(identifier==1){
                printf("%s is a identifier\n",r);
                identifier=0;
            }
             else if(constant==1){
               printf("%s is a constant\n",r);
               constant=0;
            }
            else if(y==1){
               printf("%s Invalid identifier\n",r);
               y=0;
            }





       }
 strcpy(r,"");
  }

    if(a[i]=='+' || a[i]=='-' || a[i]=='*'||a[i]=='/' || a[i]=='%' || a[i]=='=' ){
      printf("%c is a operator\n",a[i]);


    }
      else if(a[i]==',' || a[i]==';' || a[i]=='(' || a[i]==')' || a[i]=='{' || a[i]=='}'){
       printf("%c is a punctuator \n",a[i]);


    }

   //for next word, init index to 0


  else {
        if(a[i]==' ' || a[i]=='\n')
            continue;
        else
         r[j]=a[i];

         j++;





  }
   }

    }

    fclose(file);
    return 0;

}


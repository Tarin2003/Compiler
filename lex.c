#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char a[100];
FILE *file;

    char c;
  int flag=0,ctr=0,key=0,j=0,i=0,id=0,x=0,y=0,c1=0;
  char keys[30];
  char identifier[20];
  char constant[20];
  char keywo[20];
  char r[20][20];
  char h[20];
  char operators[20];
  char separators[20];
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
    if(a[i]=='+' || a[i]=='+' || a[i]=='-' || a[i]=='*'||a[i]=='/' || a[i]=='%' || a[i]=='=' ){
          operators[x]=a[i];
       x++;

        r[ctr][j]='\0';
             ctr++; //for next word
            j=0;
    }
      else if(a[i]==',' || a[i]==';' || a[i]=='(' || a[i]==')' || a[i]=='{' || a[i]=='}'){
separators[y]=a[i];
        y++;
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
            keywo[c1]=r[id];
            c++;
            flag=1;

        }
       }

      if(flag==0){
            for(int m=0;m<strlen(h);m++){
                if(isalpha(h[m])){
                   identifier=h;

                }
                else if(isdigit(h[m])){
                    constant=h;

                }

            }




       }
       strcpy(h,"");

}
printf("Keyword: ");
for(i=0;i<strlen(keywo);i++){
    printf("%c, ",keywo[i]);

}
printf("Operators : ");
for(i=0;i<strlen(operators);i++){
    printf("%c, ",operators[i]);

}
printf("\nseparators :  ");
for(i=0;i<strlen(separators);i++){
    printf("%c, ",separators[i]);

}



}

    fclose(file);


    return 0;
}


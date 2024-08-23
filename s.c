#include<stdio.h>


void create(){

}
void main()
{
    char string[100];

  int choice, length;
    while(1)
       {
        printf("\n\n....Menu.....");
        printf("\n1. Single Line or Double Line Comment");
        printf("\n2. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);


            switch(choice)
                        {
                          case 1:

            printf("This C program for checking whether a given string  is a multi line comment or not\n");

                                  printf("\nEnter a String : ");

                                    scanf("%s",&string);

     length = strlen(string);
     printf("%d\n",&length);

    if(string[0]=='/' && string[1]=='/'){
        printf("%s - It is a single line comment\n",string);
    }
    else if(string[0]=='/' && string[1]=='*' && string[length-2]=='*' && string[length-1]=='/'){
        printf("%s - It is a multi line comment\n",string);
    }
    else{
         printf("%s - It is not a multi line comment\n",string);
    }

                                   break;

                          case 2: exit(0);
                                  break;
                         default:
                                printf("\nPlease enter a valid choice");
                        }
        }

}


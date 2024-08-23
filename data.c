// C program to find data type
#include <math.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   float val;
   char str[20];
int number_Of_Value1=12;
char  University_Name='c';
printf("%c\n", University_Name);

printf("%d\n", number_Of_Value1);


   strcpy(str, "123.8");
   val = atof(str);
   printf("String value = %s, Float value = %f\n", str, val);

   strcpy(str, "wer1.23");
   val = atof(str);
   printf("String value = %s, Float value = %f\n", str, val);

   return(0);
}

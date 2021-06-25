#include <stdio.h>
#include <stdlib.h>

int main()
{

   int age;

   char sex,status;

   printf("\n  Enter your age : ");
   scanf("%d",&age);

   printf("\n  Enter your gender (Type M if you are MALE)(Type F if you are female) : ");
   scanf("%c",&sex);

   printf("\n  Enter your martial status [Type M if you are Married] [Type U if you are unmarried] : ");
   scanf("%d ",&status);



   if ((status=='M') || ( status=='U' && sex=='M' && age>30) || ( status=='U' && sex=='F' && age>25))
   {
       printf("\n  Driver should be insured \n");
   }
   else
   {
       printf("\n  Driver should not be insured \n");
   }
    return 0;
}
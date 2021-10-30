/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int i,j,n;
   printf("Enter the current tank value:");
   scanf("%d",&i);
   printf("Enter the maximum level:");
   scanf("%d",&j);
   for(n=i;n<=j;n++)
   {
       printf("Water is %d level\n",i);
       if(n==j)
       {
           printf("Reached maximum level\n");
       }
   }
   for(n=j;n<=0;n++)
   {
       printf("Water level is %d\n:",n);
       if(n==0)
       {
           printf("Emoty\n");
       }
   }
   for(n=0;n<=100;n++)
   {
       printf("Water level is %d\n",n);
       if(n==100)
       {
           printf("Reached maximum level\n");
       }
   }
   return 0;
       }
   

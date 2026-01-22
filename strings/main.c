/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{

   char str[100];
   printf("Enter the String: ");
   fgets(str,sizeof(str),stdin);
   int len=strlen(str);
   if(str[len-1]=='\n') str[len-1]='\0';
   int count=0;
   for(int i=0;str[i]!='\0';i++){
       if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
           count++;
       }
   }
   printf("%d",count);
   return 0;
}
   
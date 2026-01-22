
#include <stdio.h>
#include<string.h>
int main()
{

   char str[100];
   printf("Enter the String: ");
   fgets(str,sizeof(str),stdin);
   str[strcspn(str,"\n")]='\0';
   int len=strlen(str);
   int i=0;
   while(i<len){
      while(i<len&&str[i]==' '){
           i++;
       }
       int start=i;
       while(i<len&&str[i]!=' '){
           i++;
       }
       int end=i-1;
       while(start<end){
           int temp=str[start];
           str[start]=str[end];
           str[end]=temp;
           start++;
           end--;
       }
   }
   printf("%s",str);
    return 0;
}

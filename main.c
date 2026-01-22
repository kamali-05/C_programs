/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int num=0;
    for(int i=0;i<n;i++){
        num=num*10;
        scanf("%d",&arr[i]);
        num=num+arr[i];
        
    }
   printf("%d",num);
   return 0;
}

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

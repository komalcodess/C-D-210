#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf("The reversed array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

#include <stdio.h>
void yippie(int *p, int n,int *sum, int *avg, char *grade)
{
    *sum=0;
    for(int i=0;i<n;i++)
    {
        
            *sum+=*(p+i);

    }
    *avg=*sum/n;

    if(*avg>=75 )
    *grade= 'A';
    else if(*avg>=50)
    *grade='B';
    else 
    *grade='C';
    

}

    int main()
    {
        int n;
        int sum,avg;
        char grade;
        
        printf("Enter the subjects ");
        scanf("%d",&n);

        int arr[n];
        printf("Enter the elements: ");
      
            for(int i=0;i<n;i++)   
            {
                scanf("%d",&arr[i]);
            }

          yippie(arr,n,sum,avg,grade);
          printf("The sum is %d\n",sum);
          printf("The avg is %d \n",avg);
         

        }
        
        
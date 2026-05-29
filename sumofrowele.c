    #include <stdio.h>
    int main()
    {
        int m,n;
        printf("Enter the number of rows: ");
        scanf("%d",&m);
        printf("Enter the number of column: ");
        scanf("%d",&n);

        int arr[m][n];
        printf("Enter the elements: ");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)   
            {
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i=0;i<m;i++)
        {  
            if(i%2!=0) 
            {
                int sum=0;
                for(int j=0;j<n;j++)
                {
                    sum+=arr[i][j];
                }
                printf("The sum of row %d is %d \n",i ,sum);
            }

        
        }
    }
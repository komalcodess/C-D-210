    #include <stdio.h>
    void rev(int n,int arr[]){
    int revv[n];
    for(int i=0;i<n;i++)
    {
        revv[i]=arr[n-1-i];
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
            if(revv[i]!=arr[i])
            {
                flag=1;
            }

        
    }
    if(flag==0)
    {
        printf("The array is palindrome.");
    }
    else 
    printf("The array is not palindrome.");
    }

    int main()
    {
        int n;
        printf("Enter the size of an array: ");
        scanf("%d",&n);
        int arr[n];
        printf("Enter all the elements: ");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        rev(n,arr);
        

    }
#include<stdio.h>
int binary(int arr[],int n, int key)
{
    int low=0,high=n-1,mid;

    while(low<=high)
    {
        mid = (low+high)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            low = mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n,i;
    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[100];
    printf("Enter Array Elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter key element for serach:");
    scanf("%d",&key);

    int result = binary(arr,n,key);
    if(result != -1)
    {
        printf("Element found at %d index",result);
        return 0;
    }
    else
    {
        printf("Element not found");
        return 0;
    }
    return 0;
}

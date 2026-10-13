#include<stdio.h>
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
    printf("Enter key elements to search:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            printf("Element foud at %d index",i);
            return 0;
        }
    }


    printf("Element not found");
    return 0;
    


}

#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
    int i = low;
    int j = mid+1;
    int k = low;
    int temp[100];

    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            i++;
        }
        else
        {
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        temp[k]=a[j];
        j++;
        k++;
    }

    for(i=low;i<=high;i++)
    {
        a[i]=temp[i];
    }
}

void mergesort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;

        mergesort(a,low,mid);
        mergesort(a,mid+1,high);

        merge(a,low,mid,high);
    }
}

int main()
{
    int n,i,a[100];
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("Sorted Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

#include<stdio.h>
void BubbleSort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("Pass %d: ",i+1);
        for(j=0;j<n;j++)
            printf("%d ",a[j]);
        printf("\n");
    }
}
void SelectionSort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        printf("Pass %d: ",i+1);
        for(j=0;j<n;j++)
            printf("%d ",a[j]);
        printf("\n");
    }
}
void InsertionSort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        printf("Pass %d: ",i);
        for(j=0;j<n;j++)
            printf("%d ",a[j]);
        printf("\n");
    }
}
int main()
{
    int a[10],n,i,ch;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    if(n<1||n>10)
    {
        printf("Invalid number of elements.");
        return 1;
    }
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            BubbleSort(a,n);
            break;
        case 2:
            SelectionSort(a,n);
            break;
        case 3:
            InsertionSort(a,n);
            break;
        default:
            printf("Invalid choice.");
            return 1;
    }
    printf("\nSorted Array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

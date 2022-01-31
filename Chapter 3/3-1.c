/* 3-1. Our binary search makes two tests inside the loop, when one
 would suffice (at the price of more tests outside.) Write a version with
 only one test inside the loop and measure the difference in run-time. */

#include<stdio.h>
#define SIZE 100
int binarySearch(int number, int array[], int n)
{
    int low, high, mid;
    low = 0; 
    high = n-1;
    while(low < high)
    {
        mid = (low + high)/2 ;
        if(number > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if(array[low]== number)
    {
        return low;
    }
    return -1;
}

int main()
{
    int arr[SIZE],n,num,posn;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter the elements in ascending order:\n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the number to be searched: ");
    scanf("%d", &num);
    printf("\nnumber found at position %d ", binarySearch(num, arr, n));
    return 0;
}

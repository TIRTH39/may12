#include<stdio.h>
// C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.
int sum_of_elements(int arr[],int n)
{
   int i=0,sum=0;

   for(i=0;i<n;i++)
   {
       sum=sum+arr[i];
   }

   return sum;
}

main()
{
    int total=0;
    int array[21]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    total=sum_of_elements(array,20);

    printf("\nThe sum of all array elements is : %d",total);

}

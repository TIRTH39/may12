#include<stdio.h>
// C program to find factorial of number using recursion.

fact(int num)
{
	if(num<=0)
	{
		return 1;
	}
	else
	{
		num=num*fact(num-1);
	}
	return num;
}

main()
{
	int n,ans;
	printf("Enter Value:-");
	scanf("%d",&n);

	ans=fact(n);
	printf("Factorial = %d",ans);
}

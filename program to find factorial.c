#include<stdio.h>
int factorial(int a);
int main()
{
	int n;
	printf("enter a postive integer\n");
	scanf("%d",&n);
	int ans=factorial(n);
	printf("the value of factorial is : %d",ans);
	return 0;
}
int factorial( int a)
{
	int i,sum;
	sum=1;
	if(a==0||a==1)
	{
		sum=1;
		return sum;
    }
	else if(a>1)
	{
		for(i=a;i>=1;i--)
		{
			sum=sum*i;
		}
		return sum;
	}
	else
	{
		printf("wrong input\n");
	}
}

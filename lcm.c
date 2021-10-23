#include<stdio.h>
int main()
{
	int n,n1;
	printf("Input first number:");
	scanf("%d",&n);
	printf("Input second number:");
	scanf("%d",&n1);
	printf("Lcm of %d and %d = %d",n,n1,lcm(n,n1));
}
int lcm(int a,int b)
{
	static int m=0;
	m=m+b;
	if(m%a==0 && m%b==0)
	return m;
	return lcm(a,b);
}

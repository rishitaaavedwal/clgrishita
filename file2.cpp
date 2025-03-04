#include<stdio.h>
using namespace std;
void main() //declaring main function
{
	int n;
	printf("enter 'n' value: ");
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

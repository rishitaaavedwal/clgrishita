#include<stdio.h>
void swap(int &k, int &j) //declaration of variable
{
	//some code in here
}
int sum(int &i, int &j)
{
	return i+j;
}
int main()
{
	sum(10,20);
	swap(5,8);
	return 0;
}

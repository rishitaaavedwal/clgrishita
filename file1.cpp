#include<stdio.h>
void swap(int &k, int &j) //declaration of main function
{
	//some code in here
}
int sum(int &i, int &j) //declaration of sum function
{
	return i+j;
}
int main()
{
	sum(10,20);
	swap(5,8);
	return 0;
}

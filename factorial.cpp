#include<iostream>
using namespace std;

long fact(int a)
{
	if(a>0)
	{
		return a*fact(a-1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int s=10;
	cout<<"factorial of"<<" "<<s<<" is"<<" "<<fact(s);
}

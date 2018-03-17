#include<iostream>//to recurse is divine!!!!!!!!!!
using namespace std;
long long int fibonacci(int num)
{
	if((num==1)||(num==2)){return 1;}
	return fibonacci(num-1)+fibonacci(num-2);
}

int main()
{
	int n;
	cin>>n;
	long long int result;
	for(int i=1;i<=n;i++)
	{
		result=fibonacci(i);
		cout<<result<<"  ";
	}
	return 0;
}

#include<iostream>
using namespace std;

int prime_or_not(int num){
	if(num==2){cout<<2<<"  ";}
	int lim,lim_square;
	for(int i=2;;i++)
	{
		lim_square=i*i;
		if(lim_square>=num)
		{
			lim=i;
			break;
		}
	}
	for(int j=2;j<=lim;j++)
	{
		if(!(num%j))
		{
			return 0;
		}
	}
	return 1;
}
int main(){
	int number;
	int k;
	int n;
	cin>>n;
	for(int k=2;k<=n;k++)
	{
		number=prime_or_not(k);
		if(number){cout<<k<<"  ";}
	}
	return 0;
}

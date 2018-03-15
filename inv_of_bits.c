#include<stdio.h>

int main()
{
	int n,p,w;// n is the number,p the position,w the width;
	scanf(" %d %d %d",&n,&p,&w);
	int hl,ll;//hl is the right most bit and ll is the left most
	hl=p;
	ll=p-w+1;
	int q=1;
	int e=ll-1;//e is the number of times q needs to be left shifted initially 
	q=q<<e;
	int i=ll;
	int t;
	while(i<=hl)
	{
		t=n&q;
		if(t)
		{
			n=n-t;
		}
		else
		{
			n=n+q;
		}
		i++;
		q=q<<1;
	}
	printf("%d",n);
	return 0;
}	
	

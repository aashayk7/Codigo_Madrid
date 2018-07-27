//c program to print floyd's triangle
#include<stdio.h>

int floyds_triangle(int n)
{
	int num=1,line_num=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=line_num;j++)
		{
			printf("%d ",num);
			++num;
		}
		line_num++;
		printf("\n");
	}
}

int main()
{
	int n;
	scanf(" %d",&n);
	floyds_triangle(n);
	return 0;
}

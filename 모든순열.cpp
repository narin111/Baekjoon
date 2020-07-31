#include<stdio.h>

int res[9];
bool check[9];
int n;

void rec(int pos)
{	
	if(pos==n)
	{
		for(int i=0; i<n; i++)
		{
			printf("%d ", res[i]);
		}
		printf("\n");
		return;
	}
	
	for(int i=1; i<=n; i++)
	{
		if(!check[i])//false 이면 실행 
		{
			check[i]=true;
			res[pos]=i;
			rec(pos+1);
			check[i]=false;
		}		
	}
}

int main()
{
	scanf("%d", &n);
	rec(0);
	return 0;
}

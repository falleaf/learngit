#include<stdio.h>
#define MAXN 100

int a[MAXN];

void zuHe(int m, int n)
{
	int i,j;
	for(i=m; i>=n; i--)
	{
		a[n]=i;
		if(n>1)
			zuHe(i-1,n-1);
		else
			for(j=a[0]; j>0; j--)
			{
				printf("%4d",a[j]);
			}
		printf("\n");
	}
}

int main()
{
	//This is a description
	printf("If you want to find how many group of n is in m.\n");
	printf("Please follow this program.\n");
	int n,m;
	printf("Please input n : ");
	scanf("%d",&n);
	printf("Please input m : ");
	scanf("%d",&m);
	a[0] = n;
	zuHe(m,n);
	return 0;
}

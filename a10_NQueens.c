#include <stdio.h>
int place(int ,int);
int NQueens(int , int);
int x[99],c=0;
int main(void)
{
	int n;
	printf("\n Enter the number of Queens you want to place :");
	scanf("%d",&n);
	NQueens(1,n);
	
}
int NQueens(int k,int n)
{
	int i,t,j,a;
	for(i=1;i<=n;i++)
	{
		if(place(k,i))
		{
			x[k] = i;
			if(k==n)
			{
					printf("\nSolution %d :\n",++c);
					for (a=1;a<=k;a++)
					{
						for(j=1;j<=k;j++)
						{
							if(j==x[a])
								printf("Q%d\t",a);
							else
								printf("-\t");
						}
						printf("\n");
					}
			}
			else
				NQueens(k+1,n);
		}
	}
}

int place(int k, int i)
{
	int j;
	for(j=1;j<=k-1;j++)
	{
		if((x[j]==i) || (abs(x[j]-i) == abs(j-k)))
			return 0;
			
	}
	return 1;
}












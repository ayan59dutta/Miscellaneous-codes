#include<stdio.h>
void matrix_chain_order(int );
void print_optimal_solution(int , int );
void display(int );
int p[50],m[50][50],s[50][50],i,j;
int main(void)
{
	int n;
	printf("\n Enter the number of elements :");
	scanf("%d",&n);
	printf("\n Enter dimension sequence : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	matrix_chain_order(n);
	print_optimal_solution(i,j);
	display(n);
	return 0;
	
}
void matrix_chain_order(int n)
{
	
	int l,k,q;
	for(i=1;i<=n;i++)
	{
		m[i][i]=0;
	}
	for(l=2;l<=n;l++)
	{
		for(i=1 ; i<=n-l+1;i++)
		{
			j=i+l-1;
			m[i][j]=9999;
			for(k=i;k<=j-1;k++)
			{
				q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<m[i][j])
				{
					m[i][j]=q;
					s[i][j]=k;
				}
			}
		}
	}
}
void print_optimal_solution(int i, int j)
{
	if(i==j )
	{
		printf("A%d",i-1);
	}
	else
	{
		printf("(");
		print_optimal_solution(i,s[i][j]);
		print_optimal_solution(s[i][j]+1 , j);
		printf(")");
	}	
}
void display(int n)
{
	 int t;
	 printf("\n\n");
	 printf("Matrix is:\n");
	for(i=1;i<=n-1;i++)
	{
		for(t=1;t<i;t++)
		{
			printf("\t");
		}
		for(j=i;j<=n-1;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("Sequence matrix is :\n");
	for(i=1;i<=n-1;i++)
	{
		for(t=1;t<i;t++)
		{
			printf("\t");
		}
		for(j=i+1;j<=n-1;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
		
}

#include<stdio.h>

void FirstPattern(int row,int col,int i,int j)
{
	
	for(i=1;i<=row;i++)
	{
		for(j=i;j<=col;j++)
		{
			printf("%d",j);
		}
		for(j=i;j>1;j--)
		{
			printf("%d",col);
		}
		printf("\n");
	}
	printf("\n");
}
void SecondPattern(int row,int col,int i,int j)
{
	
	for(i=1;i<=row;i++)
	{
		if(i%2!=0)
		{
			for(j=1;j<=col;j++)
			{
				printf("%d",j);
			}
			printf("\n");
		}
		else
		{
			for(j=col;j>=1;j--)
			{
				printf("%d",j);
			}
			printf("\n");
		}
	}
	printf("\n");
}
void ThirdPattern(int row,int col,int i,int j)
{
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(i==1 || i==row || j==1 || j==col)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	printf("\n");
}
void ForthPattern(int row,int col,int i,int j)
{
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
void FifthPattern(int row,int col,int i,int j)
{
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=row;i++)
	{
		for(j=col-1;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
void SixsthPattern(int row,int col,int i,int j)
{
	for(i=1;i<=row;i++)
	{
		for(j=row;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=2;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=row;j>=i;j--)
		{
			printf("*");
		}
		for(j=row-1;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
void SevnthPattern(int row,int col,int i,int j)
{
	for(i=1;i<=row;i++)
	{
		for(j=row;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=col;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	int row,col,i,j;
	printf("Enter a size of row:");
	scanf("%d",&row);
	printf("Enter a size of column:");
	scanf("%d",&col);
	
	FirstPattern(row,col,i,j);
	SecondPattern(row,col,i,j);	
	ThirdPattern(row,col,i,j);
	ForthPattern(row,col,i,j);	
	FifthPattern(row,col,i,j);	
	SixsthPattern(row,col,i,j);
	SevnthPattern(row,col,i,j);
}

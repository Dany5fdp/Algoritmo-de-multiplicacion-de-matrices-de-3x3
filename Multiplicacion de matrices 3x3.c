#include<stdio.h>
#include<stdlib.h>

int main()
{
	int matrizA[3][3]={{2,2,2},{2,2,2},{2,2,2}};
	int matrizB[3][3]={{1,1,1},{1,1,1},{1,1,1}};
	int matrizC[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int i,j,k,l;
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("\t%d",matrizA[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("\t%d",matrizB[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				for(l=0;l<3;l++)
				{
					matrizC[i][j]=matrizC[i][j]+(matrizA[l][k]*matrizC[l][k]);
				}
			}
		}
	}
		for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("\t%d",matrizC[i][j]);
		}
	}
	return 0;
}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int m1[3][3]={{9,8,7},{6,5,4},{3,2,1}};
	int m2[3][3]={{7,6,5},{3,2,1},{1,1,1}};
	int mf[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int x,y; 
	printf("RESTA DE MATRICES\n");
	printf("Matriz 1\n");
		for(x=0;x<3;x++){
				for(y=0;y<3;y++){
			printf("%d ", m1[x][y]);
		}
		printf("\n");
    }
    printf("\n");	
	printf("Matriz 2\n");
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			printf("%d ", m2[x][y]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Suma de matrices\n");
	for(x=0;x<3;x++){
				for(y=0;y<3;y++){
					mf[x][y]= m1[x][y]- m2[x][y];
			printf("%d ", mf[x][y]);
			
			}
		printf("\n");
}
return 0;
}

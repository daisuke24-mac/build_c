#include <stdio.h>
#define dVerticalSize (50)			//縦の長さ
#define dHorizontalSize (51)		//横の長さ
int main(){
	int i,j,k,numV,numH;
for(j=1;j<dVerticalSize;){
	numV = j;
	numH = dHorizontalSize/2-numV/2;
		for(i=0;i<numH;i++){
			printf("□");
		}
		for(k=0;k<numV;k++){
			printf("■");
		}
		for(;i+k<dHorizontalSize;i++){
			printf("□");
		}
	j += 2;
	printf("\n");
	}
}
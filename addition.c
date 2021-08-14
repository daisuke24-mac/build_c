#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "MT.h"
#define dNum (1000)
#define maxNum (10000)

int main(){
	int i;
	int num_1,num_2,sum;
	FILE *fp;
	fp = fopen("test.txt", "wa");
	if (fp == NULL) {			// オープンに失敗した場合
     			printf("cannot open\n");        // エラーメッセージを出して
    			exit(1);                        // 異常終了
  	}
  	init_genrand((unsigned)time(NULL));
  	fprintf(fp,"num_1,num_2,sum\n");
  	for(i=0;i<dNum;i++){
  		num_1 = genrand_int32()%maxNum;
  		num_2 = genrand_int32()%maxNum;
  		sum = num_1+num_2;
  		fprintf(fp,"%d,%d,%d\n",num_1,num_2,sum);
  	}
	fclose(fp);
	printf("success\n");
	return 0;
}

#include<stdio.h>
int main(void){
	int i, a[5], sum = 0;
	for(i=0; i<5; i++){
		printf(“a[%d] : ”, i);
		scanf(“%d”, &a[i]);
	}
	for(i=0; i<5; i++){
		//ここに記述せよ
	}
	printf(“average : %f\n”, (double)sum/5);
}

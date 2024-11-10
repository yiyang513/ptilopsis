#include<stdio.h>
int main(){
	int x =1,x1;
	for(int day =9;day >0;day --){
		x1 =(x+1)*2;
		x =x1;
	}
	printf("%d",x1);
	return 0;
}

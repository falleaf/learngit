#include<stdio.h>

int iterate(int value){
	if(value == 1)
		return 1;
	return value + iterate(value - 1);
}
int main(){
	printf("Input a number: ");
	int n;
	scanf("%d",&n);
	printf("The iterate sum is %d\n",iterate(n));
	return 0;
}

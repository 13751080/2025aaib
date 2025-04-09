/// week08-3.cpp
#include <stdio.h>
int main(){
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d", & a[i] );
	}
	for(int k=0; k<99; k++){
		for(int j=0; j<99; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i=0; i<100; i++){
		printf("%d ",a[i]);
	}
}

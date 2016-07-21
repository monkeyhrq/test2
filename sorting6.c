#include <stdio.h>
void btos(int *src, int len){
		int tem;
			for(int i = 0;i <len;i++){
			for(int j = 0;j < len-i-1 ; j++){
			if(src[j]<src[j+1]){
			tem=src[j];
			src[j]=src[j+1];
			src[j+1] = tem;
				}
			}
		}
}

void sort(int *src, int len){
	int tem;
		for (int i = 0;i < len;i++){
			for(int j = 0;j < len-i-1 ; j++){
				if(src[j]>src[j+1]){
				tem = src[j];
				src[j] = src[j+1];
				src[j+1] = tem;
				}
			}
		}
}
int main(){
	int a[5] = {31,25,42,33,75};
		printf("How many numbers in the case? = %d\n",sizeof(a)/4);
	int c;
	scanf ("%d",&c);
	if(c==1){
		sort(a, 5);
		for(int i = 0;i < 5;i++)
		printf("%d\n", a[i]);
}
	if(c==2){
	btos(a, 5);
	for(int i = 0;i < 5;i++)
		printf("%d\n",a[i]);
}
return 0;
}

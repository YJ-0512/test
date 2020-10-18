#include<stdio.h>
int main(){
	FILE *stream;
	stream = fopen("fwrite.txt","w");
	int data[10]= {1,2,3,4,5,6,7,8,9,0};
	fwrite(data,sizeof(int),10,stream);
	fclose(stream);
}

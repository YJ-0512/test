#include"ch2.h"
int main()
{
	int d1;
	d1=open("out.info",O_CREAT|O_TRUNC|O_WRONLY,0644);
	dup2(d1,1);
	printf("输出重定向");
	printf("%d",d1);
	return 0;
}

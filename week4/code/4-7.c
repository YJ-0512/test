#include"ch2.h"
int main()
{
	int d1;
	d1=open("out.info",O_CREAT|O_TRUNC|O_WRONLY,0644);
	int ret=fcntl(d1,F_DUPFD);
	printf("输出重定向");
	printf("%d",ret);
	return 0;
}

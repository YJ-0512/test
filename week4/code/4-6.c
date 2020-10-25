#include"ch2.h"
int main()
{
	int fd;
	fd=open("file.info",O_RDWR|O_WRONLY,0644);
	char buf;
	int n,i;
	for(i=0;i<2;i++)
	{
		srand(time(0));
		n=rand()%26;//生成0-25的数字；
		buf=(char)("a"+n);
		write(fd,&buf,1);
		lseek(fd,10,SEEK_SET);
		sleep(30);
	}
	close(fd);
	return 0;
}

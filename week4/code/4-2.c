#include"ch2.h"
char buf1[]="abcdefghij";
char buf2[]="0123456789";
int main(void)
{
	int fd;
	if ((fd=open("file.hole",O_WRONLY|O_CREAT,0644))<0)
		err_exit("creat error");
	if (write(fd,buf1,10)!=10)
		error_exit("write error");
	if (lseek(fd,40,SEEK_SET)==-1)
		error_exit("lseek error");
	return 0;
}
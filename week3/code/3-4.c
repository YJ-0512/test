#include"ch2.h"
int main()
{
	FILE* fp;
	char buf[80];
	int ret;
	memset(buf,0,sizeof(buf));	
	if((fp=fopen("./test1.txt","w"))==NULL)
		perror("open failed!\n");
	printf("please input string you want to store in file:\t");
	fgets(buf,sizeof(buf),stdin);
	printf("Content is s%.The sizeof stream is %ld bytes. \n",buf,sizeof (buf));
	ret=fwrite(buf,4,sizeof(buf)/4,fp);
	printf("Actual writing number of item is %d\n",ret);
	fclose(fp);
	return 0;
}
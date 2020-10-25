#include"ch.h"
 int reverse(int number)
	{
		int tmp=0;
		while(number!=0)
		{
		 tmp=(tmp*10 + number%10);
		 number=number/10;
		}
	 if(number<0) return (-tmp);
		else return tmp;
	}
int main(){
	FILE*fp;
	char filename[30],s[60];
	printf("请输入文件名:\n");
	//gets(filename);
	scanf("%s",filename);
	if((fp=fopen(filename,"r+"))==NULL){
	printf("打开文件失败...\n");
	exit(0);
}
	fgets(s,60,fp);
	int x,y;
	sscanf(s,"%d",&x);//sscanf是读取字符串s，然后输出其中的数字部分； 
	y=reverse(x);//倒置数字； 
	int ss[100];
	int i=0,j=0,temp;
	while(y>0)
	{	
		temp=y%10;
		ss[i]=temp;
		y=y/10;
		i++;
	}//把文件的前n+1个数存放到数组里； 
	int n,m=0,k;
	/*printf("%d",ss[1]);
	printf("%d",ss[2]);*/
	printf("你要找哪一条记录，请输入数字:\n");
	scanf("%d",&n);
	if(n==1)
	{
		m=ss[0]+1;
		for (i=m;i<m+ss[1];i++)
		{
		printf("%c",s[i]);
		}
	}
	else
	{
		for(i=1;i<n;i++)
		{
			m+=ss[i];
		}
		m=m+ss[0]+1;
		for (i=m;i<m+ss[n];i++)
		{
		printf("%c",s[i]);
		}
	}
	return 0;
}

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
	printf("�������ļ���:\n");
	//gets(filename);
	scanf("%s",filename);
	if((fp=fopen(filename,"r+"))==NULL){
	printf("���ļ�ʧ��...\n");
	exit(0);
}
	fgets(s,60,fp);
	int x,y;
	sscanf(s,"%d",&x);//sscanf�Ƕ�ȡ�ַ���s��Ȼ��������е����ֲ��֣� 
	y=reverse(x);//�������֣� 
	int ss[100];
	int i=0,j=0,temp;
	while(y>0)
	{	
		temp=y%10;
		ss[i]=temp;
		y=y/10;
		i++;
	}//���ļ���ǰn+1������ŵ������ 
	int n,m=0,k;
	/*printf("%d",ss[1]);
	printf("%d",ss[2]);*/
	printf("��Ҫ����һ����¼������������:\n");
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

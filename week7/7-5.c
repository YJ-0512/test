#include"ch2.h"
static void set_env_string(void){
	char test env[]="test_env=test";
	if(putenv(test_env)!=0))
	{
		printf("putenv is failed!\n");
	}
	printf("1.The test_env=%s\n",getenv("test_env"));
}

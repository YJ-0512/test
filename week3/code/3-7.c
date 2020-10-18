#include<stdio.h>
 
int main ()
{
   FILE *fp;
   char str[] = "This is cj";
 
   fp = fopen( "file.txt" , "w" );
   fwrite(str, sizeof(str) , 1, fp );
 
   fclose(fp);
  
   return(0);
}

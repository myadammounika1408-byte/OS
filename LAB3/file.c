#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
 int i=0;
 int f1,f2;
 char c,strin[100];
 
 /*Open file for reading*/
 f1=open("data_RATNAMALA",O_RDWR | O_CREAT | O_TRUNC, 0644);
 
 /*Read input from keyboard*/
 while((c=getchar())!='\n')
 {
  strin[i++]=c;
 }
 strin[i]='\0';
 
 /*Write data into file*/
 write(f1,strin,i);
 close(f1);
 
 /*open file for reading*/
 f2=open("data_RATNAMALA",O_RDONLY);
 
 /*read data from file*/
 read(f2,strin,i);
 strin[i]='\0';
 
 /*Display file content*/
 printf("\nData read from file:\n %s\n",strin);
 close(f2);
 return 0;
}

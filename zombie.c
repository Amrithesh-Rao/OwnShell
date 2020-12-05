#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
void main()
{
  int p;
  if((p=fork())==0)
  {
    exit(0);
  }
  else
  {
    printf("Zombie process has been successfully created.\n\n");
    printf("Process status:\n\n");
    system("ps -au");
    printf("\n");
    printf("Please wait....\n");
    sleep(10);
  }
}

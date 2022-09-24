#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
    int pid_t,pid,pid1,p,p1;
    pid = fork();
    if(pid == -1)
    {
        printf("Enter in connection");
    }
    else
    if(pid == 0)
    {
        printf("\nChild process1:\n\n");
        p = getppid();
        printf("Parent process id of child 1: %d\n",p);
        p1 = getpid();
        printf("Parent process id 0f child 1: %d\n",p1);
    }
    else
    {
        pid1 = fork();
        if(pid == 0)
        {
            printf("\nChild process 2: \n\n");  
            p = getppid();
            printf("Parent process id of child 2: %d\n",p);
            p1 = getpid();
            printf("Parent process id of child 2: %d\n",p1);
        }
    else
    {
        printf("This is parent process\n");
        p = getppid();
        printf("Grant parent: %d\n",p);
        p1 = getpid();
        printf("Process id of parent: %d\n",p1);
    }
    }
    return 0;
}
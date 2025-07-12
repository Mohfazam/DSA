#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
    pid_t p;
    printf("Before Fork");
    p=fork();

    if(p==0){
        printf("Im child having id: %d\n", getpid());
        printf("Parent id is: %d\n", getppid());
    }
    else{
        printf("I am parent having id: %d\n", getpid());
        printf("My child id: %d\n", p);

    }

    return 0;
}
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void) {
        int variavel;
        pid_t pid = fork();
        if(pid == 0)
                variavel = 10;
        else { 
                wait(NULL);
                variavel = 100;
        }
        printf("%d\n", variavel);
        return 0;
}

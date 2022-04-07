#include<stdio.h>
#include<unistd.h>

int main(void) {
        int variavel;
        pid_t pid = fork();
        if(pid == 0)
                printf("Filho\n");
        else
                printf("Pai\n");

		fflush(NULL);
        return 0;
}

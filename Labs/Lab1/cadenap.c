#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(void){
    int i, status;
    pid_t child;

    for(i=0;i<4;i++){
        if(child=fork())break;
    }
    fprintf(stderr,"Esta es la vuelta Nro %d \n",i);
    fprintf(stderr,"Recibi de fork el valor de %d \n",child);
    fprintf(stderr,"Soy el proceso %d con padre %d \n\n",getpid(),getppid());
    wait(&status);
    return 0;
}

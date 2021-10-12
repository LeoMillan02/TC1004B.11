#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void handleSignal(int signal){
    printf("No me mates ;-;\n");
}

int main(){
    signal(2,handleSignal);
    sgnal(12,handlesignal);
    while (1){
        printf("Chambeando\n");
        sleep(1);
    }

    return 0;
}
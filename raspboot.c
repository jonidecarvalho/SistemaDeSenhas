/*

programa pra correr a solução em powerapps "Senhas OD" no SO raspbian

v1.04
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char *argv[]) {
    int t;
    do {
        t=0;
        int id = fork();
        if ( id == 0 ) {
            system("chromium-browser --kiosk \"https://apps.powerapps.com/play/c26e1844-cc5f-4ce9-9829-ffce9e13dde9\"");
        }
        if ( id != 0 ) {
            sleep(3600);
            system("pkill chromium-browser");
            t=1;
        }
    }while(t);
    return 0;
}

#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
int main(int argc,char* argv[]){
    while(true){
        sleep(30);
        printf("%s\n",argv[1]);
    }
    return 0;
}
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(void){
    int key = 1;
    while (key){
        fork();
    }
}

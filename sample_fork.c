#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 

    fork();        /* fork a process */

    printf("Hello world!\n");       /* the child and parent will execute every line of code after  
                                                       the fork (each separately)*/

    return 0; 
} 


#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h> 

int main() {
    struct rlimit lim;
    // print the following values using rlimit
    getrlimit(RLIMIT_STACK, &lim); //max stack size
    printf("max stack size: %ld \n", lim.rlim_cur);
    getrlimit(RLIMIT_NPROC, &lim); //Max number of processes
    printf("max process limit: %ld\n", lim.rlim_cur);
    getrlimit(RLIMIT_NOFILE, &lim); //Max file descripter number
    printf("max file descriptors: %ld\n", lim.rlim_cur);
    
}



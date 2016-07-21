#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;
    // print the following values using rlimit
    printf("stack size: (max limit) %ld \n", lim.rlim_max);
    printf("process limit: (The maximum stack size for the process) %d\n", RLIMIT_STACK);
    printf("max file descriptors: (current limit) %ld\n", lim.rlim_cur);
    
}

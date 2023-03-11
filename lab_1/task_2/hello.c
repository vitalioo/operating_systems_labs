#include <stdio.h>

#include "hello_static.h"

void print_hello(){
    printf("Hello world\n");
}

int main(){
    hello_from_static_lib();
    print_hello();
    return 0;
}
#include <stdio.h>

#include "hello_dynamic.h"

void print_hello(){
    printf("Hello world\n");
}

int main(){
    hello_from_dynamic_lib();
    print_hello();
    return 0;
}
// test.c
#include <stdio.h>
#include <assert.h>


int add(int a, int b) {
    return a + b;
}

int main() {
    
    assert(add(10, 20) == 30); 
    
    assert(add(5, 5) == 10);
    
    printf("All unit tests passed successfully!\n");
    return 0;
}



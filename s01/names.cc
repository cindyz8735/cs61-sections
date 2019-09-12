#include <cstdlib>
#include <cstdio>

int main() {
    int x = 61;
    printf("x = %d\n", x);

    // Change the following lines to use different names for `x`. Each line
    // should print the same *object*, but using a different *name*.
    // You may add additional declarations, such as `int* y = &x;`.
    // Create as many names as you can!
    printf("Via name 1: %d\n", x);
    printf("Via name 2: %d\n", x);
    printf("Via name 3: %d\n", x);

    // print 61
    // use & operator to print address of x
    // pointers are 8 bytes
}

/*

Question. 
Which of the following data expressions correspond to objects? 
Assume that this code goes in s01/names.cc.

x           // x is an object
x + 1       // 
&x          // not an object, more like a function 
61          //
The string "x = %d\n"  // in 'code segment' which is allocated memory. should be in data segment b/c static string. 


*/

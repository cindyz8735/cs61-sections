#include <cstdlib>
#include <cstdio>
#include <cstdint>

char global_ch = 65;  // stored in data segment
const char const_global_ch = 66;  // stored in data segment

int main() {
    char local_ch = 67;  // stored in stack (bc in function)
    char* allocated_ch = (char*) malloc(sizeof(char)); 
    *allocated_ch = 68;

    printf("Hello\n");  // "Hello\n" is technically a string literal and is an object

    char* ptr_global_ch = &global_ch;
    uintptr_t addr_global_chr = (uintptr_t) ptr_global_ch;
    printf("size of global_ch is: %zu\n", sizeof(global_ch));
    printf("addr of global_ch is: %p\n", addr_global_chr);

    printf("size of const_global_ch is: %zu\n", sizeof(const_global_ch));
    printf("addr of const_global_ch is: %p\n", const_global_ch);

    char* ptr_local_ch = &local_ch;
    uintptr_t addr_local_chr = (uintptr_t) ptr_local_ch;
    printf("addr of local_ch is: %p\n", addr_local_chr);

    printf("addr of allocated_ch is: %p\n", allocated_ch);

    printf("addr of allocated_ch pointer is: %p\n", &allocated_ch);

}

// heap = dynamically allocated memory
// programmer asks for it to be done at particular time

// the pointer allocated_ch automatically added (stack)
// high address --> probably on stack

// the one in the heap should be 1 b/c char, the pointer should be 8 b/c pointer. everything should be 1 besides pointer.
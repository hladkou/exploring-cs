#include <stdio.h>
#include <stdalign.h>
#include <stddef.h>

struct TestStruct
{
    char c;
    int x;
};

int main()
{

    // Print size of struct
    printf("Size of TestStruct: %zu bytes\n", sizeof(struct TestStruct));

    // Print alignment requirement
    printf("Alignment of int: %zu\n", alignof(int));

    // Print offset of elements
    printf("Offset of c: %zu\n", offsetof(struct TestStruct, c));
    printf("Offset of x: %zu\n", offsetof(struct TestStruct, x));

    return 0;
}

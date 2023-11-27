#include <stdio.h>

struct TestStruct
{
    char c; // size = 1 byte
    int i;  // size = 4 bytes
};

void main()
{
    struct TestStruct a;

    // A padding of 3 bytes added after char to align int
    printf("a.c (char) = %lu\n", sizeof(a.c));
    printf("a.i (int) = %lu\n", sizeof(a.i));
    printf("whole struct takes %lu bytes\n", sizeof(a)); // = 1 + 3 pad bytes + 4 = 8 bytes
}

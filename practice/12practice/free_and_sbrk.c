#include<stdlib.h>

#define MAX_ALLOCS 1000000

int
main(int argc, char *argv[])
{
    char *ptr[MAX_ALLOCS];
    int freeStep,freeMin,freeMax,blockSize,numAllocs,j;

    printf("\n");

    if(argc < 3 || strcmp(argv[1], "--help") == 0)
}
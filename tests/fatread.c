#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("r2/os fat16 kernel test loader\n");

    if (argc == 1)
    {
        printf("usage: %s inputfile\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "rb");
    if (fp == NULL)
    {
        printf("%s is not a valid file/device\n", argv[1]);
        return 1;
    }

    fclose(fp);
    return 0;
}
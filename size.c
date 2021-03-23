#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [김태인] [2018038033] -----]\n");

    int **x; //int형 이중포인터 **x 선언

    printf("sizeof(x) = %lu\n", sizeof(x)); //x크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //포인터 *x 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //이중 포인터 **x 크기 출력

}

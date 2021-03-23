#include <stdio.h>

void print1 (int *ptr, int rows); //print1 함수 선언 

int main()
{
    printf("[----- [김태인] [2018038033] -----]\n");

    int one[] = {0, 1, 2, 3, 4}; //int one[]값에 0, 1, 2, 3, 4값 선언

    printf("one      = %p\n", one); //one 값 출력
    printf("&one     = %p\n", &one); //one의 주소 값 출력
    printf("&one[0]  = %p\n", &one[0]); //one[0]의 주소 값 출력
    printf("\n"); 

    print1(&one[0], 5); //print1 함수 사용

    return 0; //0으로 리턴
   
}

void print1 (int *ptr, int rows)
{ /* print out a one-dimensional array using a pointer */

    int i; //for에 쓸 int 형 변수 i 선언
    printf("Address \t Contents\n");
    for(i = 0; i < rows; i++) //i = 0 부터 rows - 1 까지 반복문 사용
        printf("%p \t  %5d\n", ptr + i, *(ptr + i)); //ptr + i 값 출력, 및 포인터 *(ptr + i)값 출력
    printf("\n");

}

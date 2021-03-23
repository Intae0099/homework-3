#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [김태인] [2018038033] -----]\n");

    int list[5]; //5칸 짜리 배열 list[5] 선언
    int *plist[5] = {NULL, }; //5칸 짜리 포인터형 배열 *plist[5] 선언

    plist[0] = (int *)malloc(sizeof(int)); //plist[0]을 int 사이즈만큼 동적할당

    list[0] = 1; //list[0]에 1 설정
    list[1] = 100; //list[1]에 100 설정

    *plist[0] = 200; //*plist[0]에 200 설정

    printf("value of list[0] = %d\n", list[0]); //list[0] 값 출력
    printf("address of list[0]        = %p\n", &list[0]); //list[0]의 주소 출력
    printf("value of list             = %p\n", list); //list값 출력
    printf("address of list (&list)   = %p\n", &list); //list의 주소값 출력

    printf("---------------------------------------------\n\n"); //나눔선
    printf("value of list[1]          = %d\n", list[1]); //list[1]의 값 출력
    printf("address of list[1]        = %p\n", &list[1]); //list[1]의 주소값 출력
    printf("value of *(list+1)        = %d\n", *(list + 1)); //*(list + 1)의 값 출력
    printf("address of list+1         = %p\n", list +1); //list + 1 의 주소값 출력

    printf("---------------------------------------------\n\n"); //나눔선

    printf("value of *plist[0] = %d\n", *plist[0]); //*plist[0]값 출력
    printf("&plist[0]          = %p\n", &plist[0]); //*plist[0]의 주소값 출력
    printf("&plist             = %p\n", &plist); //plist의 주소값 출력
    printf("plist              = %p\n", plist); //plist 값 출력
    printf("plist[0]           = %p\n", plist[0]); //plist[0]의 값 출력
    printf("plist[1]           = %p\n", plist[1]); //plist[1]의 값 출력
    printf("plist[2]           = %p\n", plist[2]); //plist[2]의 값 출력
    printf("plist[3]           = %p\n", plist[3]); //plist[3]의 값 출력
    printf("plist[4]           = %p\n", plist[4]); //plist[4]의 값 출력

    free(plist[0]); //plist[0]의 동적할당 해제
    
}

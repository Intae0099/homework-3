#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [김태인] [2018038033] -----]\n");

    int list[5]; //5칸 짜리 배열 list[5] 선언
    int *plist[5]; //5칸 짜리 포인터형 배열 *plist[5] 선언

    list[0] = 10; //list[0]에 10 설정 
    list[1] = 11; //list[1]에 11 설정

    plist[0] = (int *)malloc(sizeof(int)); //plist[0]의 동적할당 

    printf("list[0] \t= %d\n", list[0]); //list[0]값 출력
    printf("address of list \t= %p\n", list); //list 값 출력
    printf("address of list[0] \t= %p\n", &list[0]); //list[0] 주소값 출력
    printf("address of list + 0 \t= %p\n", list+0); //list + 0 값 출력
    printf("address of list + 1 \t= %p\n", list+1); //list + 1 값 출력
    printf("address of list + 2 \t= %p\n", list+2); //list + 2 값 출력
    printf("address of list + 3 \t= %p\n", list+3); //list + 3 값 출력
    printf("address of list + 4 \t= %p\n", list+4); //list + 4 값 출력
    printf("address of list[4] \t= %p\n", &list[4]); //list[4]의 주소값 출력
  
    free(plist[0]); //plist[0]의 동적할당 해제 
}

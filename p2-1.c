#include <stdio.h>

#define MAX_SIZE 100 //전역 변수 MAX_SIZE값 100으로 설정

float sum(float [], int); //sum 함수 선언
float input[MAX_SIZE], answer; //전역변수 input[MAX_SIZE], answer 선언
int i; //int형 변수 i 선언
void main(void)
{
    printf("[----- [김태인] [2018038033] -----]\n");

    for(i=0; i< MAX_SIZE; i++) // i = 0 부터 MAX_SIZE - 1 까지 반복문 사용
        input[i] = i; //input[0]부터 input[n-1]
    /* for checking call by reference
        printf("adress of input = %p\n", input);
    */

   answer = sum(input, MAX_SIZE); //answer에 sum함수로 나온 값 설정
   printf("The sum is: %f\n", answer); //answer 값 출력
}

float sum(float list[], int n) 
{
    /*
    printf("value of list = %p\n", list);
    printf("address of list = %p\n\n", &list);
    */

   int i; //for에 쓸 int 형 변수 i 선언
   float tempsum = 0; //tempsum 변서 선언
   for(i = 0; i < n; i++) // i = 0 부터 n-1 까지 반복문 사용
    tempsum += list[i]; //tempsum에 list[0] 부터 list[n-1] 까지 더한 값 설정
   return tempsum; //tempsum으로 리턴
}

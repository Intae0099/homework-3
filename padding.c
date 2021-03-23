#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
}; /*구조체 student 선언
     13칸 짜리 배열 char 형 lastName[13] 선언
     int 형 studentId 선언
     short 형 grade 선언
    */

int main()
{
    printf("[----- [김태인] [2018038033] -----]\n");

    struct student pst; //구조체 student pst 선언

    printf("size of student = %ld\n", sizeof(struct student)); //구조체 student 크기 출력
    printf("size of int = %ld\n", sizeof(int)); //int형 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short형 크기 출력

    return 0; //0으로 리턴 
}

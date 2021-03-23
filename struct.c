#include <stdio.h>
struct student1 {
        char lastName;
        int studentId;
        char grade;
}; /*구조체 student1 
     char형 lastName 선언
     int형 studentId 선언
     char형 grade 선언
    */
typedef struct {
        char lastName;
        int studentId;
        char grade;
} student2; /*구조체 student2 선언
              char형 lastName 선언
              int형 studentId 선언
              char형 grade 선언
            */

int main()
{
    printf("[----- [김태인] [2018038033] -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; /*구조체 student1 st1 선언
                                             st1.lastname에 A 설정
                                             st1.studentId 100 설정
                                             st1.grade에 A 설정
                                            */

    printf("st1.lastName = %c\n", st1.lastName); //st1.lastName 값 출력
    printf("st1.studentId = %d\n", st1.studentId); //st1.studentId 값 출력
    printf("st1.grade = %c\n", st1.grade); //st1.grade 값 출력

    student2 st2 = {'B', 200, 'B'}; /*구조체 student1 st2 선언
                                      st1.lastname에 B 설정
                                      st1.studentId 200 설정
                                      st1.grade에 B 설정
                                    */

    printf("\nst2.lastName = %c\n", st2.lastName); //st2.lastName 값 출력
    printf("st2.studentId = %d\n", st2.studentId); //st2.studentId 값 출력
    printf("st2.grade = %c\n", st2.grade); //st2.grade 값 출력


    student2 st3; //구조체 student2 st3 선언

    st3 = st2; //구조체 st3에 구조체 st2 설정

    printf("\nst3.lastName = %c\n", st3.lastName); //st3.lastName 값 출력
    printf("st3.studentId = %d\n", st3.studentId); //st3.lastName 값 출력
    printf("st3.grade = %c\n", st3); //st3.lastName 값 출력

    /* equality test */
    /*
    if(str3 == str2)
        printf("equal\n");
    else
        printf("not equal\n");
    */

   return 0; //0으로 리턴 
}

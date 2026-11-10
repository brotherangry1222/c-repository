#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch = 'M';
    printf("문자: %c\n", ch);
    
    printf("알파벳 여부: %s\n", isalpha(ch)?"예":"아니요");
    //알파벳 여부 확인 isalpha()
    printf("대문자 여부: %s\n", isupper(ch)?"예":"아니요");
    //대문자 여부 확인 isupper()
    printf("소문자 여부: %s\n", islower(ch)?"예":"아니요");
    //소문자 여부 확인 islower()
    printf("숫자 여부: %s\n", isdigit(ch)?"예":"아니요");
    //숫자 여부 확인 isdigit()
    printf("알파벳 여부 또는 숫자 여부: %s\n", isalnum(ch)?"예" :"아니요");
    //알파벳 여부 또는 숫자 여부 확인 isalnum()
    printf("16진수 숫자 여부 여부: %s\n", ispunct(ch)?"예":"아니요");
    //16진수 숫자 여부 여부 확인 ispunct()
    printf("구두점 문자 여부: %s\n", isprint(ch)?"예":"아니요");
    //구두점 문자 여부 확인 isprint()
    printf("제어 문자 여부 여부: %s\n", iscntrl(ch)?"예":"아니요");
    //제어 문자 여부 여부 확인 iscntrl()
    printf("아스키 문자 여부: %s\n", iscntrl(ch)?"예":"아니요");
    //아스키 문자 여부 확인 iscntrl()
    
    return 0;
}

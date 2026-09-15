#include <stdio.h>

int main()
{
    int score;
    printf("점수를 입력하세요:");
    scanf("%d", &score);
    char grade;

    switch (score/10)
    {
    case 10:
    case 9:
        /* code */
        grade = 'A';
        break;    
    case 8:
        /* code */
        grade = 'c';
        break;
    case 7:
        /* code */
        grade = 'd';
        break;    
    default:
        grade = 'f';
        break;
    }
    
    printf("%c", grade);

    return 0;
    
}
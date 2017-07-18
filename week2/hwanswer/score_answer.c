#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int scores[3][3]; // 가로 : 학생, 세로 : 과목
    int num_students = 3;
    int num_subjects = 3;
    double student_averages[3] = {0};
    double subject_averages[3] = {0};

    // 입력받기
    for(i=0; i<num_students; i++)
    {
        printf("학생 %d의 코딩, 적성, 인성 시험점수를 차례대로 입력하세요 : ", i+1);
        scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
    }

    // 과목 별 평균 구하기
    for(i = 0; i < num_subjects; i++)
    {
        for(j = 0; j < num_students; j++)
        {
            subject_averages[i] += scores[j][i]; 
        }
        subject_averages[i] /= (double)num_students;
    }

    // 과목 별 평균 출력
    for(i = 0; i < num_subjects; i++)
    {
        printf("과목 %d 평균 : %lf \n", i+1, subject_averages[i]);
    }

    printf("\n");

    // 학생 별 평균 구하기
    for(i = 0; i < num_students; i++)
    {
        for(j = 0; j < num_subjects; j++)
        {
            student_averages[i] += scores[i][j]; 
        }
        student_averages[i] /= (double)num_subjects;
    }

    // 학생 별 평균 출력
    for(i = 0; i < num_students; i++)
    {
        printf("학생 %d 평균 : %lf \n", i+1, student_averages[i]);
    }


    // 1.1 번에 대한 정답입니다 
    /*
    int coding_score[3] = {0};

    printf("철수의 시험점수를 입력하세요 : ");
    scanf("%d", &coding_score[0]);
    printf("영희의 시험점수를 입력하세요 : ");
    scanf("%d", &coding_score[1]);
    printf("민수의 시험점수를 입력하세요 : ");
    scanf("%d", &coding_score[2]);

    printf("코딩 시험 평균 : %lf\n", (double)(coding_score[0]+coding_score[1]+coding_score[2])/3.0);
    */

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    char name[50];
    int roll;
    struct tm birthday, admission;
    time_t btime, atime;
    double diff;
    printf("Enter student name: ");
    fgets(name, 50, stdin);
    printf("Enter roll number:");
    scanf("%d", &roll);
    printf("Enter student's birthday (YYYY/MM/DD):");
    scanf("%d%d%d", &birthday.tm_year, &birthday.tm_mon, &birthday.tm_mday);
    printf("Enter admission date (YYYY/MM/DD):");
    scanf("%d%d%d", &admission.tm_year, &admission.tm_mon, &admission.tm_mday);
    birthday.tm_year -=1900;
    birthday.tm_mon--;
    admission.tm_year -= 1900;
    admission.tm_mon--;
    btime = mktime(&birthday);
    atime = mktime(&admission);
    diff = difftime(atime, btime) / (60 * 60 * 24 * 365.25);
    printf("Age at admission: %.21f\n", diff);
    return 0;
}

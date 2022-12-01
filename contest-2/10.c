#include<stdio.h>

char grade_of_student(int x)
      {
        if(x<=100 && x>=80)
        return 'A';
        if(x<=79 && x>=60)
        return 'B';
        if(x<=59 && x>=40)
        return 'C';
        if(x<=39 && x>=0)
        return 'F';
      }
int main()
      {
        int mark;
        scanf("%d",&mark);
        printf("The grade of the student is: %c",grade_of_student(mark));
      }
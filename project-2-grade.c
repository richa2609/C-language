#include<stdio.h>
#include<conio.h>

int main(){
    int marks;
    char grade;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 90)
        grade = 'A';
    else if (marks >= 80)
        grade = 'B';
    else if (marks >= 70)
        grade = 'C';
    else if (marks >= 60)
        grade = 'D';
    else 
        grade = 'F';
            
    printf("Your grade is %c.\n", grade);
 
    switch (grade)
    {
    case 'A':
        printf("Outstanding\n");
        break;
    
    case 'B':
        printf("Excellent\n");
        break;
    case 'C':
        printf("Good\n");
        break;    
    case 'D':
        printf("Just Pass!\n");
        break;    
    case 'F':
        printf("Needs Improvement!\n");
        break;    

}
    if (grade != 'F')   
    printf("You are eligible for Certificate\n.");

    else
    printf("Better Luck Next Time...\n");

    return 0;
}

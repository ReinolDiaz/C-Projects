#include<stdio.h>
  

//frame of DOB
struct DOB
{
    int month;
    int day;
    int year;
};
//frame of studnet structure
struct Student
{
    char firstName[30];
    char lastName[30];
    char id [8];
    char standing[30];
    struct DOB dateOfBirth;
    float gpa;
};

int main()
{
    //fill DOB in 
    struct DOB DOB1 = {.month = 12, .day = 20, .year = 1996};
    struct DOB DOB2 = {.month = 01, .day = 14, .year = 1999};
    //Fill Students in 
    struct Student S1 = {.firstName = "Reinol", .lastName = "Diaz", .id = "1234567", .standing = "Senior", .dateOfBirth = DOB1, .gpa = 3.75};

    struct Student S2 = {.firstName = "Ryan", .lastName = "Diaz", .id = "5774564", .standing = "Junior", .dateOfBirth = DOB2, .gpa = 4.00};


    //Create Pointer for S2
    //struct / name of struct we want / name of pointer / , name of structure we want to point to
    struct Student *student2Pointer;
    student2Pointer = &S2;
    
    //Print Struct Direct
    printf ("\n\nName = %s %s\nStudent ID = %s\nDOB = %d/%d/%d\nStanding = %s\nGPA = %.2f\n\n", S1.firstName, S1.lastName, S1.id, S1.dateOfBirth.month, S1.dateOfBirth.day, S1.dateOfBirth.year, S1.standing, S1.gpa);
    
    //Print Struct with Pointer "Indirect" personPtr->age is equivalent to (*personPtr).age
    printf ("\n\nName = %s %s\nStudent ID = %s\nDOB = %d/%d/%d\nStanding = %s\nGPA = %.2f\n\n", student2Pointer -> firstName, student2Pointer -> lastName, student2Pointer -> id,student2Pointer -> dateOfBirth.month, student2Pointer -> dateOfBirth.day, student2Pointer -> dateOfBirth.year, student2Pointer -> standing, student2Pointer -> gpa);

    //exit
    return 0;
}
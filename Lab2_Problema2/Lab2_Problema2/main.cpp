#include "Student.h";
#include <iostream>
#include "Compar.h"

int main() {
    Student student1;
    student1.SetName("Gigel");
    student1.SetMathGrade(7);
    student1.SetEnglishGrade(2);
    student1.SetHistoryGrade(5);
 
    Student student2;
    student2.SetName("Dorel");
    student2.SetMathGrade(6);
    student2.SetEnglishGrade(9);
    student2.SetHistoryGrade(7);

    Compar compar;

    if(compar.ComparAverage(student1, student2)==0) {
        std::cout << "Equal Averages";
    }
    if (compar.ComparAverage(student1, student2) == 1) {
        std::cout << student1.GetName() << " has greater average";
    }
    if (compar.ComparAverage(student1, student2) == -1) {
        std::cout << student2.GetName() << " has greater average";
    }
    std::cout << std::endl;

    if (compar.ComparMath(student1, student2) == 0) {
        std::cout << "Equal math grades";
    }
    if (compar.ComparMath(student1, student2) == 1) {
        std::cout << student1.GetName() << " has greater math grade";
    }
    if (compar.ComparMath(student1, student2) == -1) {
        std::cout << student2.GetName() << " has greater math grade";
    }
    std::cout << std::endl;

    if (compar.ComparEnglish(student1, student2) == 0) {
        std::cout << "Equal english grades";
    }
    if (compar.ComparEnglish(student1, student2) == 1) {
        std::cout << student1.GetName() << " has greater english grade";
    }
    if (compar.ComparEnglish(student1, student2) == -1) {
        std::cout << student2.GetName() << " has greater english grade";
    }
    std::cout << std::endl;

    if (compar.ComparHistory(student1, student2) == 0) {
        std::cout << "Equal history grades";
    }
    if (compar.ComparHistory(student1, student2) == 1) {
        std::cout << student1.GetName() << " has greater history grade";
    }
    if (compar.ComparHistory(student1, student2) == -1) {
        std::cout << student2.GetName() << " has greater history grade";
    }
    std::cout << std::endl;

    compar.ComparAll(student1, student2);

}
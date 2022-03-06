#include "Compar.h"
#include <iostream>

int Compar::ComparAverage(Student student1, Student student2) {
    if (student1.ComputeAverage() == student2.ComputeAverage())
        return 0;
    if (student1.ComputeAverage() > student2.ComputeAverage())
        return 1;
    if (student1.ComputeAverage() < student2.ComputeAverage())
        return -1;
}

int Compar::ComparMath(Student student1, Student student2) {
    if (student1.GetMathGrade() == student2.GetMathGrade())
        return 0;
    if (student1.GetMathGrade() > student2.GetMathGrade())
        return 1;
    if (student1.GetMathGrade() < student2.GetMathGrade())
        return -1;
}

int Compar::ComparEnglish(Student student1, Student student2) {
    if (student1.GetEnglishGrade() == student2.GetEnglishGrade())
        return 0;
    if (student1.GetEnglishGrade() > student2.GetEnglishGrade())
        return 1;
    if (student1.GetEnglishGrade() < student2.GetEnglishGrade())
        return -1;
}

int Compar::ComparHistory(Student student1, Student student2) {
    if (student1.GetHistoryGrade() == student2.GetHistoryGrade())
        return 0;
    if (student1.GetHistoryGrade() > student2.GetHistoryGrade())
        return 1;
    if (student1.GetHistoryGrade() < student2.GetHistoryGrade())
        return - 1;
}

void Compar::ComparAll(Student student1, Student student2) {

    if (student1.ComputeAverage() > student2.ComputeAverage())
        std::cout << student1.GetName() << " has greater average";
    if (student1.ComputeAverage() < student2.ComputeAverage())
        std::cout << student2.GetName() << " has greater average";
    if (student1.ComputeAverage() == student2.ComputeAverage()) 
    {
        if (student1.GetMathGrade() > student2.GetMathGrade())
            std::cout << student1.GetName() << " has greater math grade";
        if (student1.GetMathGrade() < student2.GetMathGrade())
            std::cout << student2.GetName() << " has greater math grade";
        if (student1.GetMathGrade() == student2.GetMathGrade()) 
        {
            if (student1.GetEnglishGrade() > student2.GetEnglishGrade())
                std::cout << student1.GetName() << " has greater english grade";
            if (student1.GetEnglishGrade() < student2.GetEnglishGrade())
                std::cout << student2.GetName() << " has greater english grade";
            if (student1.GetEnglishGrade() == student2.GetEnglishGrade()) 
            {
                if (student1.GetHistoryGrade() > student2.GetHistoryGrade())
                    std::cout << student1.GetName() << " has greater history grade";
                if (student1.GetHistoryGrade() < student2.GetHistoryGrade())
                    std::cout << student2.GetName() << " has greater history grade";
                if (student1.GetHistoryGrade() == student2.GetHistoryGrade())
                    std::cout << "All grades equal";
            }
        }
    }
}

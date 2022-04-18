#pragma once
#include "Student.h"
class Compar {

  public:
    int ComparAverage(Student student1, Student student2);
    int ComparMath(Student student1, Student student2);
    int ComparEnglish(Student student1, Student student2);
    int ComparHistory(Student student1, Student student2);
    void ComparAll(Student student1, Student student2);
};
#include "Student.h"
#include <string.h>
#pragma warning(disable : 4996);

char* Student::GetName() {
    return name;
}

void Student::SetName(const char* name) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

float Student::GetMathGrade() {
    return mathGrade;
}

bool Student::SetMathGrade(float grade) {
    if (grade < 1 or grade > 10)
        return false;
    this->mathGrade = grade;
    return true;
}

float Student::GetEnglishGrade() {
    return englishGrade;
}

bool Student::SetEnglishGrade(float grade) {
    if (grade < 1 or grade > 10)
        return false;
    this->englishGrade = grade;
    return true;
}

float Student::GetHistoryGrade() {
    return historyGrade;
}

bool Student::SetHistoryGrade(float grade) {
    if (grade < 1 or grade > 10)
        return false;
    this->historyGrade = grade;
    return true;
}

float Student::ComputeAverage() {
    return (mathGrade+englishGrade+historyGrade)/3;
}

#pragma once

class Student
{
    char* name;
    float mathGrade;
    float englishGrade;
    float historyGrade;
public:
    char* GetName();
    void SetName(const char* name);
    
    float GetMathGrade();
    bool SetMathGrade(float grade);

    float GetEnglishGrade();
    bool SetEnglishGrade(float grade);

    float GetHistoryGrade();
    bool SetHistoryGrade(float grade);

    float ComputeAverage();
};
#pragma once
class Sort {
    // add data members
    int* elementList;
    int elementCount;
    void Sorteaza(int* listOfElements, int minim, int maxim, bool ascendent);
    int Partitioneaza(int* listOfElements, int minim, int maxim, bool ascendent);
  public:
    // add constuctors
    Sort(int minValue, int maxValue, int numberOfElements);
    Sort();
    Sort(int listOfElements[], int numberOfElements);
    Sort(int numberOfElements, ...);
    Sort(char* sir);
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);
};
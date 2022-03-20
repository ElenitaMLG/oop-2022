#include "Sort.h"
#include <iostream>

int main() {
    Sort obj1(1, 100, 10);
    obj1.InsertSort(true);
    obj1.Print();

    Sort obj2;
    obj2.Print();

    int v[] = { 1, 2, 3, 4, 5, 6, 7 };
    Sort obj3(v, 7);
    obj3.Print();

    Sort obj4(2, 1, 8, 3, 5, 12, 4);
    obj4.BubbleSort(false);
    obj4.Print();

    char sir[] = "5,4,2,7,11";
    Sort obj5(sir);
    obj5.QuickSort(true);
    obj5.Print();

    return 0;
}
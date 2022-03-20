#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <time.h>
#include <stdlib.h> 
#include <cstdarg>
#include <cstring>
#include <iostream>

Sort::Sort() : elementList(new int[7]{ 12, 13, 2, 5, 1, 7, 4 }) {
    elementCount = 7;
}

Sort::Sort(int listOfElements[], int numberOfElements) {
    elementList = new int[numberOfElements];
    for (int i = 0; i < numberOfElements; i++) {
        elementList[i] = listOfElements[i];
    }
    elementCount = numberOfElements;
}

Sort::Sort(int numberOfElements, ...) {
    va_list args;
    va_start(args, numberOfElements);
    this->elementCount = numberOfElements;
    elementList        = new int[numberOfElements];
    for (int i = 0; i < numberOfElements; i++) {
        elementList[i] = va_arg(args, int);
    }
    va_end(args);
}

Sort::Sort(char* sir) {
    char* p;
    char elem[100][100];
    p = strtok(sir, ",");
    while (p != NULL) {
        strcpy(elem[elementCount++], p);
        p = strtok(NULL, ",");
    }
    elementList = new int[elementCount];
    for (int i = 0; i < elementCount; i++) {
        elementList[i] = atoi(elem[i]);
    }
}

Sort::Sort(int minim, int maxim, int numberOfElements) {
    this->elementCount = numberOfElements;
    elementList        = new int[elementCount];
    srand(time(NULL));
    for (int index = 0; index < elementCount; index++) {
        elementList[index] = minim + rand() % (maxim - minim + 1);
    }
}

void Sort::InsertSort(bool ascendent) {
    for (int i = 1; i < elementCount; i++) {
        int j    = i - 1;
        int temp = elementList[i];
        if (ascendent == true) {
            while (j >= 0 && elementList[j] > temp) {
                elementList[j + 1] = elementList[j];
                j--;
            }
        } else {
            while (j >= 0 && elementList[j] < temp) {
                elementList[j + 1] = elementList[j];
                j--;
            }
        }
        if (elementList[j + 1] != temp)
            elementList[j + 1] = temp;
    }
}

void Sort::QuickSort(bool ascendent) {
    Sorteaza(elementList, 0, elementCount - 1, ascendent);
}

void Sort::Sorteaza(int* listOfElements, int minim, int maxim, bool ascendent) {
    if (minim < maxim) {
        int pi = Partitioneaza(listOfElements, minim, maxim, ascendent);
        Sorteaza(listOfElements, minim, pi - 1, ascendent);
        Sorteaza(listOfElements, pi + 1, maxim, ascendent);
    }
}

int Sort::Partitioneaza(int* listOfElements, int minim, int maxim, bool ascendent) {
    int x = listOfElements[minim];
    int i = minim + 1;
    int j = maxim;
    while (i <= j) {
        if (ascendent == true) {
            if (listOfElements[i] <= x)
                i++;
            if (listOfElements[j] >= x)
                j--;
            if (i < j && listOfElements[i] > x && listOfElements[j] < x) {
                listOfElements[i] ^= listOfElements[j] ^= listOfElements[i] ^= listOfElements[j];
                i++;
                j--;
            }
        } else {
            if (listOfElements[i] >= x)
                i++;
            if (listOfElements[j] <= x)
                j--;
            if (i < j && listOfElements[i] < x && listOfElements[j] > x) {
                listOfElements[i] ^= listOfElements[j] ^= listOfElements[i] ^= listOfElements[j];
                i++;
                j--;
            }
        }
    }
    listOfElements[minim]   = listOfElements[i - 1];
    listOfElements[i - 1] = x;
    return i - 1;
}

void Sort::BubbleSort(bool ascendent) {
    int ultim = elementCount - 1;
    while (ultim > 0) {
        int n1 = ultim - 1;
        ultim  = 0;
        for (int i = 0; i <= n1; i++) {
            if (elementList[i] > elementList[i + 1] && ascendent == true) {
                elementList[i] ^= elementList[i + 1] ^= elementList[i] ^= elementList[i + 1];
                ultim = i;
            }
            if (elementList[i] < elementList[i + 1] && ascendent == false) {
                elementList[i] ^= elementList[i + 1] ^= elementList[i] ^= elementList[i + 1];
                ultim = i;
            }
        }
    }
}

void Sort::Print() {
    for (int i = 0; i < GetElementsCount(); i++)
        std::cout << GetElementFromIndex(i) << ' ';
    std::cout << std::endl;
}

int Sort::GetElementsCount() {
    return this->elementCount;
}

int Sort::GetElementFromIndex(int index) {
    return elementList[index];
}

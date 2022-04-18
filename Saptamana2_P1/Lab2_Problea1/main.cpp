#include <iostream>
#include "NumberList.h";

int main()
{
	NumberList numList{};
	numList.Init();
	numList.Add(5);
	numList.Add(2);
	numList.Add(7);
	numList.Add(1);
	numList.Add(82);
	numList.Add(4);
	numList.Add(14);
	numList.Sort();
	numList.Print();
}
// ReferencesAndPointersExtended.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Example.h"
#include "Example2.h"

int main()
{
    Example test; //Use the default constructor
    test.Value1 = 5;
    test.Value2 = 4;

    std::cout << "test.Value1 " << test.Value1 << " test.Value2 " << test.Value2 << " test.internalResult " << test.InternalResult << "!\n";
    system("pause");

    Example* pTest; //Value is now NULL
    pTest = &test; //pointer pTest now gets assigned the reference to test, so it point to the same object

    int firstResult = test.Addition();

    std::cout << "test.Value1 " << test.Value1 << " test.Value2 " << test.Value2 << ", firstResult " << firstResult << " test.internalResult " << test.InternalResult << "!\n";
    system("pause");

    int secondResult = pTest->Addition();

    std::cout << "test.Value1 " << test.Value1 << " test.Value2 " << test.Value2 << ", secondResult " << secondResult << " test.internalResult " << test.InternalResult << "!\n";
    system("pause");

    std::cout << "pTest->Value1 " << pTest->Value1 << " pTest->Value2 " << pTest->Value2 << ", secondResult " << secondResult << " pTest->internalResult " << pTest->InternalResult << "!\n";

/*

    IMPORTANT

    pointer can be null, can be re-assigned:
    reference can not, must be assigned at declaration

    int x = 5;
    int y = 6;
    int &q; // error
    int &r = x;

*/

    //MY RECOMMENDATION:

    Example2* example2 = new Example2();
    example2->CalculationValue = 2;
}
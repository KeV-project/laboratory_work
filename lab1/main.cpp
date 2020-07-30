﻿#include <iostream>
#include <ctime>

using namespace std;


void Breakpoints()
{
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        // sum = 0.0, 1.1, 3.52, 7.513, 13.3, 21.42, 31.05, 45.69, 62.84, 84.06
        sum += add * i; // breakpoint
        add *= 1.1;
    }
    cout << "Total sum is " << sum << endl << endl;
}

void Breakpoints2()
{
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 1000; i++)
    {
        // At 777 iterations of the loop sum == 3.26
        sum += add * i; // breakpoint
        if (i % 3 == 0)
        {
            add *= 1.1;
        }
        else
        {
            add /= 3.0;
        }
    }
    cout << "Total sum is " << sum << endl << endl;
}

double GetPower(double base, int exponent)
{
    return pow(base, exponent);
}

void DemoGetPower(double base, int exponent)
{
    GetPower(base, exponent);

    cout << "Result: " << base << "^" << exponent << " = " << GetPower(base, exponent) << endl;
}

void RoundToTens(int& value)
{
    if (value % 10 < 5)
    {
        value = value / 10 * 10;
    }
    else if (value % 10 >= 5)
    {
        value = value / 10 * 10 + 10;
    }
}

void main()
{
	setlocale(LC_ALL, "rus");
    srand(time(NULL));

    // Task 1.1.1.1 ///////////////////////////////////////////////////////////
    Breakpoints();

    // Task 1.1.1.2 ///////////////////////////////////////////////////////////
    Breakpoints2();

    // Task 1.1.2.1 ///////////////////////////////////////////////////////////
    const int valuesIntCount = 10;
    int valuesInt[valuesIntCount];

    cout << "Source valuesChar is:" << endl;

    for (int i = 0; i < valuesIntCount; i++)
    {
        //rand() make values ​​in the range 0 - 32767
        valuesInt[i] = rand() % 10;
        cout << valuesInt[i] << " ";
    }

    cout << endl << endl;

    // Insertion sort
    for (int i = 1; i < valuesIntCount; i++)
    {
        int current = i;
        while (current != 0 && valuesInt[current] < valuesInt[current - 1])
        {
            int temp = valuesInt[current - 1];
            valuesInt[current - 1] = valuesInt[current];
            valuesInt[current] = temp;
            current--;
        }
    }

    cout << "Sorted valuesChar is:" << endl;

    for (int i = 0; i < valuesIntCount; i++)
    {
        cout << valuesInt[i] << " ";
    }

    cout << endl << endl;

    // Task 1.1.2.2 ///////////////////////////////////////////////////////////
    const int valuesDoubleCount = 12;
    float valuesDouble[valuesDoubleCount];
  
    cout << "Source valuesChar is:" << endl;

    for (int i = 0; i < valuesDoubleCount; i++)
    {
        valuesDouble[i] = (rand() % 10) * 0.1 + rand() % 10;
        cout << valuesDouble[i] << " ";
    }

    cout << endl << endl;

    float searchingValue = 0.0;
    cout << "Enter searching value: ";
    cin >> searchingValue;
    cout << endl;
    int count = 0;
    for (int i = 0; i < valuesDoubleCount; i++)
    {
        if (valuesDouble[i] >= searchingValue)
        {
            count++;
        }

    }
    cout << "Elements of valuesChar more than " << searchingValue << " - " << count << endl << endl;

    // Task 1.1.2.3 ///////////////////////////////////////////////////////////
    const int valuesCharCount = 8;
    char valuesChar[valuesCharCount];

    cout << "Enter array of 8 chars" << endl;

    for (int i = 0; i < valuesCharCount; i++)
    {
        cout << "Enter " << i << " element: " << endl;
        cin >> valuesChar[i];
        // Clear input buffer
        if (cin.get() != (int)'\n')
        {
            cin.clear();
            cin.ignore(32767, '\n');
        }
    }
   
    cout << endl <<  "Your array: " << endl << endl;

    for (int i = 0; i < valuesCharCount; i++)
    {
        cout << valuesChar[i] << " ";
    }

    cout << endl << endl;

    cout << "All letters in your array: " << endl << endl;

    for (int i = 0; i < valuesCharCount; i++)
    {
        if (((int)valuesChar[i] >= 65 && (int)valuesChar[i] <= 90) || ((int)valuesChar[i] >= 97 && (int)valuesChar[i] <= 122))
        {
            cout << valuesChar[i] << " ";
        }
    }
    cout << endl << endl;

    // Task 1.1.3.2 ///////////////////////////////////////////////////////////
    double base = 0.0;
    int exponent = 0;
    cout << "Enter the base: ";
    cin >> base;
    cout << endl;
    cout << "Enter exponent : ";
    cin >> exponent;
    cout << endl;
    cout << "Result: " << base << "^" << exponent << " = " << GetPower(base, exponent) << endl << endl;

    // Task 1.1.3.3 ///////////////////////////////////////////////////////////
    DemoGetPower(2.1, 5);
    DemoGetPower(5, 2);
    DemoGetPower(1, 60);
    cout << endl;

    // Task 1.1.3.4 ///////////////////////////////////////////////////////////
    int value;
    cout << "Enter value: ";
    cin >> value;
    cout << endl;
    RoundToTens(value);
    cout << "Result: " << value << endl << endl;
}

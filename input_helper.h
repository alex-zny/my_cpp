#ifndef INPUT_HELPER_H
#define INPUT_HELPER_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

inline void readNumbers(int numbers[], int& count, int maxSize)
{
    cout << "请输入一行整数（空格分隔），或直接回车使用默认数组: ";
    string input;
    getline(cin, input);
    
    count = 0;
    
    if (input.empty())
    {
        int defaultArr[] = {2, 5, 0, 12, 10, 1, 2};
        count = sizeof(defaultArr) / sizeof(defaultArr[0]);
        for (int i = 0; i < count && i < maxSize; i++)
        {
            numbers[i] = defaultArr[i];
        }
    }
    else
    {
        stringstream ss(input);
        int num;
        while (ss >> num && count < maxSize)
        {
            numbers[count++] = num;
        }
    }
}

#endif
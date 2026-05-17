#include <iostream>
#include <string>
#include "array_utils.h"
#include "input_helper.h"

using namespace std;

int main()
{
    int numbers[1000] = {0};
    int count = 0;
    readNumbers(numbers, count, 1000);
    printArray(numbers, count);

    //"输入要交换的两个位置， 空格分隔: "
    int i, j;
    int x;

    cin >> i >> j;
    x = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = x;

    printArray(numbers, count);
}
#include <iostream>
#include <string>
#include "array_utils.h"
#include "input_helper.h"

using namespace std;

int main()
{
    int numbers[1000] = {0};
    int count = 0;
    int position = 0;

    readNumbers(numbers, count, 1000);
    int sum = numbers[0];

    int x = numbers[0];
    printArray(numbers, count);
    for (int i = 0; i < count - 1; i++)
    {
        cout << sum << " " << numbers[i + 1] << endl;
        sum = sum * numbers[i + 1];
    }
    cout << sum << endl;
}
// //"输入要交换的两个位置， 空格分隔: "
// int i, j;
// int x;

// cin >> i >> j;
// x = numbers[i];
// numbers[i] = numbers[j];
// numbers[j] = x;

// printArray(numbers, count);
// if ( x > numbers[i])
// {
//   x=numbers[i];
//   position = i;
// }
//     // printArray(numbers, count);
//     // cout<<x;
#include <iostream>
#include <string>
#include "array_utils.h"
#include "input_helper.h"

using namespace std;

void insert(int nums[], int count, int at_index, int value){
    for (int i = count-1; i > at_index-1; i--)
    {
       cout << nums[i] << " " << nums[i+1] << endl;
       nums[i+1] = nums[i];

    }
    nums[at_index] = value;
}


int main()
{
    int numbers[1000] = {0};
    int count = 0;
    readNumbers(numbers, count, 1000);
    printArray(numbers, count);

    insert(numbers, count, 4, 100);

    printArray(numbers, count+1);
}
#include <iostream>
#include <string>
#include "array_utils.h"
#include "input_helper.h"

using namespace std;

// 查找指定数组nums中，位置在start_index与end_index之间，最大的那个元素的坐标（下标/位置编号）
int find_max_index(int nums[], int start_index, int end_index)
{
    int max = nums[start_index];
    int max_index = start_index;
    for (int i = start_index; i < end_index; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
            max_index = i;
        }
    }
    cout << max << "在" << max_index << endl;
    return max_index;
}

int find_min_index(int nums[], int start_index, int end_index)
{
    int min = nums[start_index];
    int min_index = start_index;
    for (int i = start_index; i < end_index; i++)
    {
        if (min > nums[i])
        {
            min = nums[i];
            min_index = i;
        }
    }
    return min_index;
}

void swap(int nums[], int a, int b)
{
    int x = 0;
    x = nums[a];
    nums[a] = nums[b];
    nums[b] = x;
}

int main()
{
    int numbers[1000] = {0};
    int count = 0;
    readNumbers(numbers, count, 1000);
    printArray(numbers, count);

    // swap(numbers,1,2);
    printArray(numbers, count);

    int x1 = find_min_index(numbers, 2, 7);
    int x2 = find_min_index(numbers, 1, 4);
    int x3 = find_min_index(numbers, 2, 6);

    // cout << x1 << endl;
    // cout << x2 << endl;
    // cout << x3 << endl;
    int wang = 0;

    for (int i = 0; i < count; i++)
    {
        if (wang - wang / 2 * 2 == 0)
        {
            int max_index = find_max_index(numbers, wang, count);
            swap(numbers, wang, max_index);
            wang = wang + 1;
        }
        else
        {
            int min_index = find_min_index(numbers, wang, count);
            swap(numbers, wang, min_index);
            wang = wang + 1;
        }
    }
    printArray(numbers, count);
}
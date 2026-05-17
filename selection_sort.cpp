#include <iostream>
#include <string>
#include "array_utils.h"

using namespace std;

int main()
{
    //     cout << string(13, '\n');
    // //  int numbers[] = { 2,5,9,2,6,90,23,1,8, 456, 98,22};
    //     int numbers[] = {2, 5, 0, 12,10, 1, 2, 10, 10};
    //     int x = numbers[0];
    //     int y = 0;

    // string persons[] = {"d","f"};
    // for (int i = 0; i < size(numbers)-1; i++)
    // {
    //     if (x > numbers[i + 1])
    //     {

    //         x = numbers[i + 1];
    //         y = i+1;
    //     }
    // }
    //    cout << x << "左边是" << numbers[y-1] << "右边是" << numbers[y+1] << endl;
    // cout <<"在第"<< y+1 <<  << x << x << endl;
    // cout << persons[size(persons)-1] << endl;
    // int shuliang = size(numbers);
    // for (int i = 0; i < shuliang; i++)
    // {
    //    if (numbers[i] > 10)
    //    {
    //       numbers[i] = 999;

    //    }else{
    //         if (numbers[i] < 10)
    //         {
    //             numbers[i] = -999;
    //         }

    //         }

    //     cout << numbers[i]<<endl;
    // }

    // 打印数组
    // printArray(persons);
    // string x = persons [0];
    // persons[0] = persons[1];
    // persons[1] = x ;
    // cout<< x << persons[0] ;

    // printArray(persons);
    // cout << string(2, '\n');
    // float a,b;
    // char c;
    // float  v;
    // cout << "说些什么";
    // cin>> a  >> c >> b ;
    // if (c=='+')
    // {
    //     v=a+b;
    // }
    // if (c=='-')
    // {
    //     v=a-b;
    // }
    // if (c=='*')
    // {
    //     v=a*b;
    // }
    // if (c=='/')
    // {
    //     v=a/b;
    // }
    // cout<< a << endl << c << endl << b <<endl<< v <<endl;
    int numbers[] = {2, 5, 0, 12, 10, 1, 2};
    printArray(numbers);
    int index_of_throne = 0;
   
    for (int i = index_of_throne; i < size(numbers); i++)
    {

        int max_value = numbers[i];
        int index_of_max_value = i;
        for (int j = i; j < size(numbers); j++)
        {
            if (numbers[j] > max_value)
            {
                max_value = numbers[j];
                index_of_max_value = j;
                
            }
        } 
         int x = 0;
        x =  numbers[index_of_max_value];
        numbers[index_of_max_value] =numbers[index_of_throne];
        numbers[index_of_throne] = x ;

        printArray(numbers);
        index_of_throne++;
    }

    printArray(numbers);

    return 0;
}

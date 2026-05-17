#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <iostream>
#include <string>

using namespace std;

// ========== 打印带引号的值 ==========
template<typename T>
void printValue(const T& value) {
    cout << value;
}

void printValue(const string& value) {
    cout << "\"" << value << "\"";
}

void printValue(char value) {
    cout << "'" << value << "'";
}

void printValue(const char* value) {
    cout << "\"" << value << "\"";
}

// ========== print 函数 ==========
template <typename T>
void print(T key) {
    cout << key << endl;
}

void print(int idx, const string& value) {
    cout << "第" << idx << "位 = " << value << endl;
}

template <typename T, typename F>
void print(T key, F value) {
    cout << key << " = " << value << endl;
}

// ========== 数组工具 ==========
template<typename T, size_t N>
void printArray(const T (&arr)[N]) {
    cout << "[";
    for (size_t i = 0; i < N; i++) {
        printValue(arr[i]);
        if (i < N - 1) cout << ", ";
    }
    cout << "]";
    cout << endl;
}

template<typename T, size_t N>
void printArray(const T (&arr)[N], const string& name) {
    cout << name << ": [";
    for (size_t i = 0; i < N; i++) {
        printValue(arr[i]);
        if (i < N - 1) cout << ", ";
    }
    cout << "]";
}

template<typename T, size_t N>
void printArray(const T (&arr)[N], int count) {
    cout << "数组: [";
    for (size_t i = 0; i < count; i++) {
        printValue(arr[i]);
        if (i < count - 1) cout << ", ";
    }
    cout << "]" << endl;
}

template<typename T, size_t N>
void printArrayWithIndex(const T (&arr)[N], const string& name) {
    cout << "=== " << name << " ===" << endl;
    cout << "数组大小: " << N << " 个元素" << endl;
    for (size_t i = 0; i < N; i++) {
        cout << "  [" << i << "] = ";
        printValue(arr[i]);
        cout << endl;
    }
}

template<typename T, size_t N>
constexpr size_t getArraySize(const T (&)[N]) {
    return N;
}

template<typename T, size_t N>
int findIndex(const T (&arr)[N], const T& value) {
    for (size_t i = 0; i < N; i++) {
        if (arr[i] == value) return i;
    }
    return -1;
}

template<typename T, size_t N, typename Predicate>
int countIf(const T (&arr)[N], Predicate pred) {
    int count = 0;
    for (size_t i = 0; i < N; i++) {
        if (pred(arr[i])) count++;
    }
    return count;
}

#endif
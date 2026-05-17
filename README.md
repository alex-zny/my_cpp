# CSP-J C++ 练习

C++ 学习项目，用于练习 CSP-J（CCF 非专业级软件能力认证入门级）相关算法和数据结构。

## 文件说明

### 头文件
- `array_utils.h` - 数组工具函数模板（打印、查找、计数等）
- `input_helper.h` - 输入辅助函数

### 练习程序
| 文件 | 内容 |
|------|------|
| `selection_sort.cpp` | 选择排序 |
| `array_product.cpp` | 数组元素求积 |
| `array_insert.cpp` | 数组元素插入 |
| `array_swap.cpp` | 数组元素交换 |
| `find_minmax.cpp` | 查找最值与排序 |

## 编译运行

```bash
# 编译
clang++ -std=c++17 -o bin/<name> <name>.cpp

# 运行
./bin/<name>
```

示例：
```bash
clang++ -std=c++17 -o bin/selection_sort selection_sort.cpp && ./bin/selection_sort
```

## 输入格式

大部分程序支持交互式输入：输入一行空格分隔的整数，或直接回车使用默认数组 `{2, 5, 0, 12, 10, 1, 2}`。
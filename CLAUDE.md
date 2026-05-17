# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

C++ learning repository for CSP-J (China Computer Federation's Junior programming competition). Each `.cpp` file is a standalone program practicing fundamental algorithms and data structures.

## Build Commands

Compile and run a single file:
```bash
# Using clang++ (macOS default)
clang++ -std=c++17 -o bin/<name> <name>.cpp && ./bin/<name>

# Using g++
g++ -std=c++17 -o bin/<name> <name>.cpp && ./bin/<name>
```

Example:
```bash
clang++ -std=c++17 -o bin/selection_sort selection_sort.cpp && ./bin/selection_sort
```

## Architecture

**Utility Headers:**
- `array_utils.h` - Template functions for array operations: `printArray()`, `printArrayWithIndex()`, `getArraySize()`, `findIndex()`, `countIf()`
- `input_helper.h` - `readNumbers()` for reading space-separated integers from stdin with default fallback

**Source Files:**
Standalone programs, each focusing on one concept:
- `selection_sort.cpp` - Selection sort algorithm
- `array_product.cpp` - Array multiplication
- `array_insert.cpp` - Array element insertion
- `array_swap.cpp` - Element swapping
- `find_minmax.cpp` - Finding min/max with sorting variant

All programs include `array_utils.h` and optionally `input_helper.h`.
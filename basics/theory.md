# Functions in C++

A function is a reusable block of code that performs a specific task. Functions help modularise code, improve readability, reduce repetition, and allow code to be reused multiple times.

## Basic Syntax

```cpp
return_type function_name(parameters) {
    // code
}
```

## Void Function

A void function does not return a value.

```cpp
void change(int x) {
    x = 100;
}
```

## Pass by Value

A copy of the variable is passed to the function. Changes made inside the function do not affect the original variable.

```cpp
void change(int x) {
    x = 100;
}
```

## Pass by Reference

A reference to the original variable is passed using `&`. Changes made inside the function affect the original variable.

```cpp
void change(int &x) {
    x = 100;
}
```

## Arrays

When an array is passed to a function, the function can modify the original array elements. To prevent modification, use `const`.

```cpp
void print(const int arr[], int size) {
    // arr cannot be modified
}
```

## `<cmath>` Functions

Include the `<cmath>` header:

```cpp
#include <cmath>
```

| Function | Purpose | Example | Result |
|----------|---------|---------|--------|
| `sqrt(x)` | Square root | `sqrt(25)` | 5 |
| `pow(x, y)` | x raised to y | `pow(2, 3)` | 8 |
| `abs(x)` | Absolute value | `abs(-10)` | 10 |
| `floor(x)` | Round down | `floor(4.8)` | 4 |
| `ceil(x)` | Round up | `ceil(4.2)` | 5 |
| `round(x)` | Nearest integer | `round(4.6)` | 5 |
| `log(x)` | Natural logarithm | `log(10)` | ≈ 2.30 |
| `log10(x)` | Base-10 logarithm | `log10(100)` | 2 |
| `exp(x)` | e raised to x | `exp(1)` | ≈ 2.718 |
| `fmod(x, y)` | Floating-point remainder | `fmod(7.5, 2)` | 1.5 |
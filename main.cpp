#include <iostream>


std::string reverseString(std::string input);
int largestInt(int a, int b, int c);
int factorial(size_t n);
int fibonacci(size_t n);


int main (int argc, char* argv[]) {
    return 0;
}


// Problem 1: a function that reverses the input string
std::string reverseString(std::string input) {
    std::string result = "";
    for (int i = input.length() - 1; i >= 0; --i) {
        result += input.at(i);
    }
    return result;
}

// Problem 2: a function that accepts three ints as input and returns the largest of the three
int largestInt(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

// Problem 3: a function that calculates the factorial of an input integer using recursion
int factorial(size_t n) {
    if (n == 1 || n == 0) { return 1; }
    return n * factorial(n - 1);
}

// Problem 4: a function that calculates the nth entry of the Fibonacci sequence
int fibonacci(size_t n) {
    int previous = 1;
    int sum = 0;
    for (size_t i = 0; i < n; ++i) {
        int temp = sum;
        sum += previous;
        previous = temp;
    }
    return sum;
}
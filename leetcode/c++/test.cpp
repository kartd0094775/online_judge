#include <stdio.h>
#include <iostream>
using namespace::std;

struct stack {
    int* stack;
    int top = -1;
};

int main() {
    stack* s1 = new stack;
    
    int* test = new int{0};
    cout << test << endl;
    cout << *test << endl;
    delete test;
    cout << test << endl;
    cout << *test << endl;
    *test = 123;
    cout << *test << endl;
    cout << s1 << endl;
    return 0;
}

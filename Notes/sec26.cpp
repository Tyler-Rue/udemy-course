//Headers and prototypes

#include <iostream>
using namespace std;

void doSomething(); //prototype-compiler will now let you call the function

int main() {

    doSomething();
    doSomething();

    return 0;
}

void doSomething() {
    cout << "Hello" << endl;
}

/*

(user created file would be as follows):
#ifndef UTILS_H_
#define UTILS_H_

void doSomething();

#endif

#include <iostream>

#include "utils.h" --tells compiler to include a seperate file; "" typically reference a file you created while <> typically reference a known preexisting file; 
however they are interchangable

using namespace std;


int main() {

    doSomething();
    doSomething();

    return 0;
}

void doSomething() {
    cout << "Hello" << endl;
}
*/